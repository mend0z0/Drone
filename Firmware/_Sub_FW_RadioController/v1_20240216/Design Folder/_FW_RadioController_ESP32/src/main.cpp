#include <Arduino.h>
#include <WiFi.h>
#include <EspMQTTClient.h>


EspMQTTClient radioController(
    "55Sundance",               // Wifi SSID
    "4168309434",               // Wifi password
    "192.168.0.148",            // MQTT Broker IP
    "",                         // MQTT Username
    "",                         // MQTT Password
    "Quadcopter",               // MQTT Client name
    3667                        // MQTT port number
);

String returnData;

void setup() {
    Serial.begin(9600);

    radioController.enableDebuggingMessages();   // Enable debugging messages sent to serial output
    radioController.enableHTTPWebUpdater();      // Enable the web updater. User and password default to values of MQTTUsername and MQTTPassword. These can be overridded with enableHTTPWebUpdater("user", "password").
}

void onConnectionEstablished()
{
  // Subscribe to "QCOPTER0" and display received message to Serial
  radioController.subscribe("QCOPTER0/#", [](const String & payload) {
    returnData  = payload;
    Serial.println(payload);
  });

  // Publish a message to "QCOPTER0"
  if(returnData){
    radioController.publish("QCOPTER0", returnData); // You can activate the retain flag by setting the third parameter to true
    returnData.clear(); 
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  radioController.loop();
}