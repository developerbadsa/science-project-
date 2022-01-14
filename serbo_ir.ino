#include <Servo.h>


const int analogInPin = A0;
int sensorValue = 0;               
int servoPin = 9;
int i = 0;

Servo servo;

void setup() {
 
servo.attach(servoPin);
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);

}

void loop() {
 
  sensorValue = analogRead(analogInPin);          
 
  if(sensorValue < 600){
    digitalWrite(12,HIGH);
    delay(900);
    for(i=0;i<80;i++){
      servo.write(i);
      delay(10);
      }
  delay(7000);
  }
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8, LOW);
   servo.write(0);
   }
