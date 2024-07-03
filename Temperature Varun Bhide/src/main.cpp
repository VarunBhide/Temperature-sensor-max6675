
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <WiFiClient.h>
#include <ThingSpeak.h>
#include <max6675.h>
#include<DNSServer.h>

// Replace with your network credentials and ThingSpeak settings
const char* ssid = "Airtel_BhandGogi";
const char* password = "admin@123";
unsigned long myChannelNumber = 2589082;
const char* myWriteAPIKey = "H5EJU6CY29LKF1UZ";


// Pin configuration for MAX6675
int thermoDO = D5;
int thermoCS = D6;
int thermoCLK = D7;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

WiFiClient client;

void setup() {
  Serial.begin(115200);
  delay(100);

  WiFi.begin(ssid, password);
  Serial.print("Connecting to ");
  Serial.print(ssid);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("Connected to WiFi");

  ThingSpeak.begin(client);
}

void loop() {
  float temperature = thermocouple.readCelsius();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  ThingSpeak.setField(1, temperature);

  int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  if (x == 200) {
    Serial.println("Channel update successful.");
  } else {
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }

  delay(3000); // Update every 20 seconds
}
