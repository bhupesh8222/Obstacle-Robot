#include <NewPing.h>
 
#define TRIGGER_PIN  A3
#define ECHO_PIN     A2
#define MAX_DISTANCE 200

#include <Servo.h> 

int servoPin = 11;
 
Servo servo;  
 
int angle = 0;   // servo position in degrees
 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
  Serial.begin(9600);
  servo.attach(servoPin); 
}
 
void loop() {
  delay(1000);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
   servo.write(90);
 delay(1000);
 servo.write(0);
 delay(1000);
}
