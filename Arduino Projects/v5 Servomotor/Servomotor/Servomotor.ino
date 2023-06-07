#include <Servo.h>

int servoPin = 9;
int servoPos = 300;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(servoPos);
}
