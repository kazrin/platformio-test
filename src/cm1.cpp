#include <Arduino.h>
#include <WiFi.h>
#include <Config.h>

void setup()
{
  Serial.begin(115200);
  delay(5000);

  if (Config::ssid)
  {
    if (Config::pass != "")
    {
      Serial.println("Connecting to WiFi with SSID and password");
      WiFi.begin(Config::ssid, Config::pass);
    }
    else
    {
      Serial.println("Connecting to WiFi with SSID");
      WiFi.begin(Config::ssid);
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
  Serial.println("This is cm1.cpp");
  delay(1000);
}