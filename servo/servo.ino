#include<Servo.h>

Servo myservo;

int bientro = A0;

int servoPin = 9;

void setup(){
    myservo.attach(servoPin);
    Serial.begin(9600);
  }
void loop(){
    int value = analogRead(bientro);
    int servoPos = map(value, 0, 1023, 0, 360);
  myservo.write(servoPos);
  Serial.println(servoPos);
  delay(100);
  
  }
