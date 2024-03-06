
#include <EspMQTTClient.h>

/*    TASKS       */

// A second uart to communicate with STM32U5 baud rate at 115200 and 2 stops, no parity

// Two functions, 1 Jason Key parser, 2 Jason value parser                              (DONE)
//  
// Two functions, 1 receving status from STM32U5 and send to Application,               (DONE)
//                1 recieve command from application and transmit command to STM32U5    (DONE)
// Testing the communication


/*          */

const uint8_t CMD_FORWARD = 0U;          // FORWARD command index
const uint8_t CMD_REVERSE = 1U;          // REVERSE command index
const uint8_t CMD_LEFT = 2U;             // LEFT command index
const uint8_t CMD_RIGHT = 3U;            // RIGHT command index
const uint8_t CMD_ELEVATE = 4U;          // ELEVATE command index
const uint8_t CMD_DIRECT = 5U;           // DIRECT command index
const uint8_t COMMAND_INDEX_MAX = 6U;    // The total number of commands this radio-controller can decode.
const uint8_t COMMAND_MAX_BUFF = 10U;    // The total number of character that each command can contain.

const char qcopterCommands[COMMAND_INDEX_MAX][COMMAND_MAX_BUFF] = { "\"FORWARD\"",  \
                                                                    "\"REVERSE\"",  \
                                                                    "\"LEFT\"",     \
                                                                    "\"RIGHT\"",    \
                                                                    "\"ELEVATE\"",  \
                                                                    "\"DIRECT\""
                                                                  };

const uint8_t STATUS_INITIAL_CODE = 0U;
const uint8_t STATUS_TEMP = 1U;           // TEMP Status index
const uint8_t STATUS_HUMEDITY = 2U;       // HUMEDITY Status index
const uint8_t STATUS_BATT = 3U;           // BATT Status index
const uint8_t STATUS_SPEED = 4U;          // SPEED Status index
const uint8_t STATUS_DISPLACEMENT = 5U;   // DISPLACEMENT Status index
const uint8_t STATUS_HEIGHT = 6U;         // HEIGHT Status index
const uint8_t STATUS_GEOPOS = 7U;         // GEOPOS Status index
const uint8_t STATUS_INDEX_MAX = 8U;      // The total number of status parameters we'll relay to application.
const uint8_t STATUS_MAX_BUFF = 15U;      // The total number of character that each status can contain.

const uint8_t STATUS_CODE_OFFSET = 3;
const uint8_t STATUS_ARRAY_MAX_SIZE = (STATUS_INDEX_MAX * STATUS_CODE_OFFSET);


const char qcopterStatus[STATUS_INDEX_MAX][STATUS_MAX_BUFF] = { "0z0",              \
                                                                "\"TEMP\"",         \
                                                                "\"HUMEDITY\"",     \
                                                                "\"BATT\"",         \
                                                                "\"SPEED\"",        \
                                                                "\"DISPLACEMENT\"", \
                                                                "\"HEIGHT\"",       \
                                                                "\"GEOPOS\""
                                                              };


void JsonParser( char *inputJSON, uint8_t *outputArray);
void JsonFormatter( uint8_t *inputArray, char *jsonOutput);

EspMQTTClient radioController(
    "55Sundance",               // Wifi SSID
    "4168309434",               // Wifi password
    "192.168.0.148",            // MQTT Broker IP
    "",                         // MQTT Username
    "",                         // MQTT Password
    "Quadcopter",               // MQTT Client name
    3667                        // MQTT port number
);


void onConnectionEstablished()
{
  // Subscribe to "mytopic/test" and display received message to Serial
  radioController.subscribe("QCOPTER_COMMAND", [](const String & payload) {
    Serial.println(payload);
  });
}

#define RXD2  16U
#define TXD2  17U

void setup() {
  Serial.begin(9600);
  Serial.print("Radio controller\t");
  Serial.print(__FILE__);
  Serial.print("\t");
  Serial.print(__DATE__);
  Serial.println("");

  Serial2.begin( 115200, SERIAL_8N2, RXD2, TXD2);


  radioController.enableDebuggingMessages();   // Enable debugging messages sent to serial output
  radioController.enableHTTPWebUpdater();      // Enable the web updater. User and password default to values of MQTTUsername and MQTTPassword. These can be overridded with enableHTTPWebUpdater("user", "password").
    
  onConnectionEstablished();
}

uint16_t cnt = 0;

uint8_t commandToBeRelayed[50];
uint8_t statusReceived[STATUS_ARRAY_MAX_SIZE] = {'0','z','0',0x01,0x0,0x32,0x02,0x00,0x4B,0x03,0x0C,0x3A,0x04,0x00,0x0A,0x05,0x02,0xEE,0x06,0x00,0xA8,0x07,0x01,0x09};
char statusTobeSent[250];

void loop() {
  // put your main code here, to run repeatedly:
  radioController.loop();

  if(radioController.qcopterPayload[0])
  {
    Serial.println("We received sth...");                           // Debug line
    //Serial.print((const char *)radioController.qcopterPayload);   // Debug line
    JsonParser(radioController.qcopterPayload, commandToBeRelayed);
    Serial.print((const char *)&commandToBeRelayed[0]);             // Debug line          
    Serial.println("");                                             // Debug line   
    Serial2.print((const char *)&commandToBeRelayed[0]);            // Sending the decoded values to STM32U575
    //radioController.qcopterPayload.clear();
    for(uint16_t i = 0; i < 1024; ++i)
    {
      radioController.qcopterPayload[i] = 0;
    }
  }

  if(Serial2.available())
  {
    Serial2.readBytes( &statusReceived[0], STATUS_ARRAY_MAX_SIZE);
    //Serial.println("Now Sending status...");                          // Debug line
    JsonFormatter( &statusReceived[0], &statusTobeSent[0]);
    //Serial.println("Ready to be published...");                       // Debug line
    radioController.publish("QCOPTER_STATUS", statusTobeSent, false); // Publish a message to "QCOPTER_STATUS"
    cnt = 0;
    for(uint16_t i = 0; i < 250; ++i)
    {
      statusTobeSent[i] = 0;
    }
  }

  /*
  cnt++;
    
  if(cnt > 1000){
    //Serial.println("Now Sending status...");                          // Debug line
    JsonFormatter( &statusReceived[0], &statusTobeSent[0]);
    //Serial.println("Ready to be published...");                       // Debug line
    radioController.publish("QCOPTER_STATUS", statusTobeSent, false); // Publish a message to "QCOPTER_STATUS"
    cnt = 0;
    for(uint16_t i = 0; i < 250; ++i)
    {
      statusTobeSent[i] = 0;
    }
  }
  delay(1);
  
  */
}

/*
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

uint8_t JsonParser( uint8_t *inputData, uint8_t *commands[])
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
          commands[cnt][0] = *(inputData + i);
          Serial.print(commands[cnt][0]);
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

*/

int8_t JsonParserFindKey(char *inputStr, uint8_t charPos)
{
  uint8_t cntStr = charPos;
  uint8_t cntCmdTable = 0;
  uint8_t cntCmdTableBuff = 0;
  int8_t tempResult = -1;

  while(cntCmdTable != COMMAND_INDEX_MAX)
  {
    if(*(inputStr + cntStr) == 0)         // If we reached to the end of input string we'll return error
    {
      tempResult = -1;
      break;
    }
    else if(qcopterCommands[cntCmdTable][cntCmdTableBuff] == 0) // If we reached to the end of on of the commands in the command table then it means we find a match so we return the command index value
    {
      tempResult = cntCmdTable;
      break;
    }
    else if(*(inputStr + cntStr) != qcopterCommands[cntCmdTable][cntCmdTableBuff])   // If the string didn't match we'll check next value in the table.
    {
      cntCmdTable++;
      cntStr = charPos;
      cntCmdTableBuff = 0;
    }
    else
    {
      cntStr++;
      cntCmdTableBuff++;
    }
  }
  return tempResult;
}

int16_t JasonParserASCIIToInt( char *inputStr, uint8_t charPos)
{
  volatile int16_t tempVar = 0;
  uint8_t cnt = charPos;
  uint32_t powerOfTen = 1;

  while(1)
  {
    if(*(inputStr + cnt) == 0)
    {
      tempVar = -1;
      break;
    }
    else if(powerOfTen > 10000)
    {
      break;
    }
    else if(*(inputStr + cnt) == ',')
    {
      break;
    }
    else if((*(inputStr + cnt) >= '0') || (*(inputStr + cnt) <= '9'))
    {
      tempVar += (*(inputStr + cnt) - '0');
      tempVar = (tempVar * powerOfTen);
    }
    cnt++;
    powerOfTen *= 10;
  }
  return tempVar;
}

void JsonParser( char *inputJSON, uint8_t *outputArray)
{
  uint8_t cntJSON = 0;
  uint8_t cntOutput = 0;
  uint16_t tempVar = 0;

  // Check the first byte is '{' and it ends with '}'. (sometimes the last byte is \n or something else...)
  if(*(inputJSON + 0) != '{')
  {
    Serial.println("ERROR - Not a JSON string");  // Debug note
    return;
  }
  while(1)
  {
    cntJSON++;
    if(*(inputJSON + cntJSON) == 0)
    {
      Serial.println("ERROR - Not a JSON string");  // Debug note
      return;
    }
    else if(*(inputJSON + cntJSON) == '}')
    {
      cntJSON = 1;
      break;
    }
  }

  //Parsing the input JSON formatted string.
  while(*(inputJSON + cntJSON))
  {
    // Find the key (compare the input with the existed key that is stored in MCU)
    while(*(inputJSON + cntJSON))
    {
      if(*(inputJSON + cntJSON) == '\"')
      {
        *(outputArray + cntOutput) = JsonParserFindKey( inputJSON, cntJSON);
        cntOutput++;
        break;
      }
      cntJSON++;
    }
    // Find the value (read the value and convert it to two 8 byte value (MSB byte LSB byte))
    while(*(inputJSON + cntJSON))
    {
      if(*(inputJSON + cntJSON) == ':')
      {
        tempVar = JasonParserASCIIToInt( inputJSON, cntJSON);
        *(outputArray + cntOutput) = (tempVar & 0XFF00) >> 8;
        cntOutput++;
        *(outputArray + cntOutput) = (tempVar & 0XFF);
        cntOutput++;
      }
      cntJSON++;
    }
  }

  return;
}

/* This one simply recieved the data from uart and then encode it in Json format */
/* The format is like this (the first two double-quotation are to define it as a string) --> "command1 value1-MSB Byte value1-LSB byte command2 value2-MSB Byte value2-LSB byte command3value3-MSB Byte value3-LSB byte" */

/* The Json format would be like (the first two double-quotation are to define it as a string)--> "{\n\"key1\":value1,\n
                                                                                                      \"key2\":value2,\n
                                                                                                      \"key3\":value3\n
                                                                                                   }\n"
                                                                                                    */

void JsonFormatterIntToASCII( uint8_t *inputIntValue, volatile char *outputASCII, uint8_t varPos)
{
  uint32_t powerOfTen = 100000UL;
  uint32_t tempVar = 0;
  uint8_t cnt = 0;
  bool trailingZeroFlag = true; //this will indicate the trailing zeros, and if it's false that mean that zero is not a trailing zero.

  tempVar = (uint16_t)(*(inputIntValue + varPos) << 8);
  varPos++;
  tempVar |= *(inputIntValue + varPos);

  //Serial.print(tempVar, DEC);   // Debug line
  //Serial.println("");           // Debug line

  for(uint32_t powerOfTen = 100000UL; powerOfTen > 1; powerOfTen /= 10)
  {
    if(cnt == 5)
    {
      break;
    }
    else if((((tempVar % powerOfTen) / (powerOfTen / 10)) != 0) || (trailingZeroFlag == false))
    {
      outputASCII[cnt] = ((tempVar % powerOfTen) / (powerOfTen / 10)) + '0';
      cnt++;
      trailingZeroFlag = false;
    }
  }

  if(trailingZeroFlag == true)
  {
    outputASCII[0] = '0';
  }

  return;
}

void JsonFormatterInsertToObj( const char *inputKey, volatile char *inputValue, char *outputJson)
{
  uint8_t cntJson = 0;        // This is the counter that counts json byte index.
  uint8_t cntKeyAndVal = 0;   // This is the counter that is used for counting key and value byte index.

  // This is to create a JSON obj along with adding a new key to the object.
  if(*(outputJson + cntJson) != '{')
  {
    *(outputJson + cntJson) = '{';
    cntJson++;
    *(outputJson + cntJson) = '\n'; 
    cntJson++;
  }
  // Adding a seperator ',' to add more key to existed JSON object
  else
  {
    while(*(outputJson + cntJson) != '}')
    {
      cntJson++;
    }
    cntJson--;  //we technically going to start 1 byte before the curly bracket closes.
    *(outputJson + cntJson) = ',';
    cntJson++;
    *(outputJson + cntJson) = '\n';
    cntJson++;
  }
  // Adding the key
  while(*(inputKey + cntKeyAndVal) != 0)
  {
    *(outputJson + cntJson) = *(inputKey + cntKeyAndVal);
    cntKeyAndVal++;
    cntJson++;
  }
  // Adding the value
  *(outputJson + cntJson) = ':';
  cntJson++;
  //*(outputJson + cntJson) = '\"';
  //cntJson++;
  cntKeyAndVal = 0;
  while(*(inputValue + cntKeyAndVal) != 0){
    *(outputJson + cntJson) = *(inputValue + cntKeyAndVal);
    cntKeyAndVal++;
    cntJson++;
  }
  //*(outputJson + cntJson) = '\"';
  //cntJson++;
  // Ending the JSON string
  *(outputJson + cntJson) = '\n';
  cntJson++;
  *(outputJson + cntJson) = '}';
  cntJson++;
  *(outputJson + cntJson) = '\n';

  return;
}

void JsonFormatter( uint8_t *inputArray, char *jsonOutput)
{
  volatile uint8_t tempVar = 0;
  volatile char tempStr[5] = {0,0,0,0,0};
  /*
  //check if the string is complete othewise reject it
  for(uint8_t cnt = 0; cnt < STATUS_ARRAY_MAX_SIZE; ++cnt)
  {
    if(*(inputArray + cnt) == '\0')
    {
      Serial.println("Access denied - Wrong input string buffer size");     //Debug note
      return;
    }
  }
  */
  //Next check if the input code matches it's "0z0"
  if((*(inputArray + 0) != '0') && (*(inputArray + 1) != 'z') && (*(inputArray + 2) != '0'))
  {
    Serial.println("Access denied - Wrong Initial code");     //Debug note
    return;
  }

  // I made it this way so the order of status input won't be that much of matter! so for example Geopos can be the first status and temp the last one!
  for(uint8_t cnt = STATUS_CODE_OFFSET; cnt < STATUS_ARRAY_MAX_SIZE; cnt += STATUS_CODE_OFFSET)
  {
    tempVar = *(inputArray + cnt);
    //Serial.print(&qcopterStatus[tempVar][0]);   // Debug line
    //Serial.println("");                         // Debug line
    JsonFormatterIntToASCII( inputArray, &tempStr[0], (cnt + 1));
    //Serial.print((const char *)&tempStr[0]);    // Debug line
    //Serial.println("");                         // Debug line
    JsonFormatterInsertToObj( &qcopterStatus[tempVar][0], &tempStr[0], jsonOutput);
    //Serial.print(jsonOutput);                   // Debug line
    //Serial.println("");                         // Debug line
    tempStr[0] = 0;
    tempStr[1] = 0;
    tempStr[2] = 0;
    tempStr[3] = 0;
    tempStr[4] = 0;
  }

  return;
}