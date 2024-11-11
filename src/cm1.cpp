#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("This is cm1.cpp");
  delay(1000);
}