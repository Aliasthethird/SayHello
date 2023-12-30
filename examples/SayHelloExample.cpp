#include <Arduino.h>
#include <SayHello.h>

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  sayHello();
}