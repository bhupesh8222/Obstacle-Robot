/*
Adafruit Arduino - Lesson 14. Sweep
*/

#include <Servo.h> 

int servoPin = 11;
 
Servo servo;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo.attach(servoPin); 
 //lookRight();
 //delay(2000);
 //lookLeft();
 
 
} 
 
 
void loop() 
{ 
  
 servo.write(0);

} 

void lookRight()
{
   servo.write(20);
  delay(1000);
  //distance
   servo.write(0);
}

void lookLeft(){
  servo.write(-20);
  delay(1000);
 //distance
   delay(1000);
   
   servo.write(0);
}
