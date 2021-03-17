/*
Adafruit Arduino - Lesson 14. Sweep
*/

#include <Servo.h> 

int servoPin = 11;
 
Servo servo_motor;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo_motor.attach(servoPin); 
 //lookRight();
 //delay(2000);
 //lookLeft();
 
 
} 
 
 
void loop() 
{ 
  
Serial.println("LOOKED LEFT!");
  servo_motor.write(40);
  delay(1000);
  
  servo_motor.write(0);
  delay(1000);

} 
