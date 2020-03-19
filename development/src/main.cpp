#include <Arduino.h>
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup()
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop()
{
  myservo.write(45);  // rotate counterclockwise full speed
  delay(2000);
  myservo.write(90);  // stop
  delay(100);
  myservo.write(135);  // rotate clockwise full speed
  delay(2000);
  myservo.write(90);  // stop
  delay(100);
  myservo.write(80);  // rotate very slowly counterclockwise
  delay(2000);
  myservo.write(90);  // stop
  delay(100);
  myservo.write(100);  // rotate very slowly clockwise
  delay(2000);
}

// //KY-018 Example Code
// int sensorPin = 2; //define analog pin 2
// int value = 0; 

// void setup() {
// 	Serial.begin(9600); 
// } 

// void loop() {
// 	value = analogRead(sensorPin); 
// 	Serial.println(value, DEC); // light intensity
// 								// high values for bright environment
// 								// low values for dark environment
// 	delay(100); 
// }

// // Include the Stepper library<br>#include 
// // Declare the used pins
// int dirA = 12;
// int dirB = 13;
// int pwmA = 3;
// int pwmB = 11;
// // Declare a Stepper motor with 200 steps 
// Stepper stepper1(200, dirA, dirB);
// void setup() {
//   // PWM pins require declaration when used as Digital
//   pinMode(pwmA, OUTPUT);
//   pinMode(pwmB, OUTPUT);
  
//   // Set PWM pins as always HIGH
//   digitalWrite(pwmA, HIGH);
//   digitalWrite(pwmB, HIGH);
  
//   // Set stepper motor speed
//   stepper1.setSpeed(60);
// }
// void loop(){
//   // Turn the stepper 100 steps which means 180 degrees
//   stepper1.step(100);
//   // Wait half second
//   delay(500);
  
//   // Turn the stepper 100 steps back which means 180 degrees
//   stepper1.step(-100);
//   // Wait half second
//   delay(500);
// }