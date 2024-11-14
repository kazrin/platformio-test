#include <Arduino.h>
#include <WiFi.h>
#include <WiFiConfig.h>

void setup()
{
  Serial.begin(115200);
  delay(5000);

  if (WiFiConf::ssid)
  {
    if (WiFiConf::pass != "")
    {
      Serial.println("Connecting to WiFi with SSID and password");
      WiFi.begin(WiFiConf::ssid, WiFiConf::pass);
    }
    else
    {
      Serial.println("Connecting to WiFi with SSID");
      WiFi.begin(WiFiConf::ssid);
    }
    while (WiFi.status() != WL_CONNECTED)
    {
      delay(500);
      Serial.print(".");
    }
  }
  else
  {
    Serial.println("No WiFi credentials found");
  }
}

void loop()
{
  Serial.println("This is cm2.cpp");
  delay(1000);
}