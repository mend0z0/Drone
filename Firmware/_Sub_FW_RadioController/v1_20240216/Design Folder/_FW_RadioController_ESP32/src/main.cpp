
#include <EspMQTTClient.h>

#define FORWARD   0U
#define REVERSE   1U
#define LEFT      2U
#define RIGHT     3U
#define DIRECTION 4U
#define HEIGHT    5U

#define QCOPTER_CMD_SIZE_MAX  15U
#define QCOPTER_CMD_INDEX_MAX 6U

uint8_t qcopterCommands[QCOPTER_CMD_INDEX_MAX];

EspMQTTClient radioController(
    "55Sundance",               // Wifi SSID
    "4168309434",               // Wifi password
    "192.168.0.148",            // MQTT Broker IP
    "",                         // MQTT Username
    "",                         // MQTT Password
    "Quadcopter",               // MQTT Client name
    3667                        // MQTT port number
);

String returnData = "{\n\"Temperature\":10,\n\"Humedity\":30,\n\"Battery\": 3000\n,\n\"Speed\": 5\n,\n\"Displacement\": 500\n,\n\"Height\": 250\n,\n\"Geologicalposition\": 180\n}\n";

void onConnectionEstablished()
{
  // Subscribe to "mytopic/test" and display received message to Serial
  radioController.subscribe("QCOPTER0/#", [](const String & payload) {
    Serial.println(payload);
  });
}

uint8_t JsonParser( uint8_t *inputData, uint8_t *commands);

void setup() {
  Serial.begin(9600);
  Serial.println("Hello?");

  //radioController.enableDebuggingMessages();   // Enable debugging messages sent to serial output
  radioController.enableHTTPWebUpdater();      // Enable the web updater. User and password default to values of MQTTUsername and MQTTPassword. These can be overridded with enableHTTPWebUpdater("user", "password").
    
  onConnectionEstablished();

}


uint16_t cnt = 0;

void loop() {
  // put your main code here, to run repeatedly:
  radioController.loop();

  if(radioController.qcopterPayload[0])
  {
    Serial.print((const char *)radioController.qcopterPayload);
    JsonParser(radioController.qcopterPayload, qcopterCommands);
    Serial.println("All the commands have been registered");
    //radioController.qcopterPayload.clear();
    for(uint16_t i = 0; i < 1024; ++i)
    {
      radioController.qcopterPayload[i] = 0;
    }
  }

  cnt++;
    
  if(cnt > 10000){
    radioController.publish("QCOPTER0", returnData, false); // Publish a message to "QCOPTER0"
    cnt = 0;
  }
  delay(1);
}

bool CompareArray( uint8_t *input, uint8_t *sample)
{
  uint8_t pointerCnt = 0;
  bool matchedFlag = false;
  uint8_t tempSample = *(sample + pointerCnt);
  uint8_t tempInput = *(input + pointerCnt);

  while(tempSample)
  {
    if(tempInput != tempSample)
    {
      //Serial.print(*input);
      //Serial.println("No match");
      matchedFlag = false;
      break;
    }
    else if(tempInput == tempSample)
    {
      matchedFlag = true;
    }
    pointerCnt++;
    tempSample = *(sample + pointerCnt);
    tempInput = *(input + pointerCnt);
  }
  if(matchedFlag == true)
  {
    Serial.print((const char *)sample);
    Serial.print(" Matched: ");
  }
  return matchedFlag;
}

uint8_t JsonParser( uint8_t *inputData, uint8_t *commands)
{
  bool compareStatus = false;
  uint8_t commandTable[][QCOPTER_CMD_SIZE_MAX] = {"Forward","Reverse","Left","Right","Direction","Height"};
  
  Serial.println("Json starts parsing...");

  for(uint8_t cnt = 0; cnt < QCOPTER_CMD_INDEX_MAX; ++cnt)
  {
    for(uint16_t i = 0; i < 1024; ++i)
    {
      if(*(inputData + i) == 0)
      {
        break;
      }
      else if(*(inputData + i) == '\"'){
        i++;  //move to next byte
        compareStatus = CompareArray(&inputData[i], &commandTable[cnt][0]);
        if(compareStatus == true)
        {
          while(*(inputData + i) != ' ')
          {
            i++;
          }
          i++;  //this to access the next byte
          commands[cnt] = *(inputData + i);
          Serial.print(commands[cnt]);
          Serial.println("");
          compareStatus = false;
          break;
        }
      }
    }
  }
  Serial.println("Json is done...!");
  return 0;
}