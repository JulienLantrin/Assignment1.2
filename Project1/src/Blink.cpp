/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

int sensorPin = A1; //input on the card
int sensorValue = 0; //variable

int busyWait1(int x){
  delay(x);
  return 0;
}

int busyWait2(int x){
  int i,j;
  int64_t c=0;
  for(i=0;i<x;i++){
    for(j=0;j<x;j++){
      c+=9;
    }
  }
  return 0;
}

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(sensorPin);
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  busyWait2(sensorValue);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  busyWait2(sensorValue);
}
