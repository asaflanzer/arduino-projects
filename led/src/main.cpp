#include <Arduino.h>

int led = 13; // the pin the LED is connected to

void showLED(int pin, int delayPeriod, bool ledStatus)
{
  if (ledStatus)
  {
    Serial.println("The green led is on");
    digitalWrite(pin, HIGH);
  }
  else
  {
    Serial.println("The green led is off");
    digitalWrite(pin, LOW);
  }
  delay(delayPeriod);
}

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT); // Declare the LED as an output
  Serial.println("Start");
}

void loop()
{
  showLED(led, 2000, HIGH); // Turn the LED on
  showLED(led, 2000, LOW);  // Turn the LED off
}