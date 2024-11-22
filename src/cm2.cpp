#include <Arduino.h>
#include <WiFi.h>
#include <UserConfig.h>

void setup()
{
  Serial.begin(115200);
  delay(5000);

  if (UserConfig::ssid != "")
  {
    if (UserConfig::pass != "")
    {
      Serial.println("Connecting to WiFi with SSID and password");
      WiFi.begin(UserConfig::ssid, UserConfig::pass);
    }
    else
    {
      Serial.println("Connecting to WiFi with SSID");
      WiFi.begin(UserConfig::ssid);
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