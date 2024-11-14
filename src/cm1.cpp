#include <Arduino.h>
#include <WiFi.h>
#include <WiFiConfig.h>

void setup() {
  Serial.begin(115200);
  WiFi.begin(WiFiConf::ssid, WiFiConf::pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

}

void loop() {
  Serial.println("This is cm1.cpp");
  delay(1000);
}