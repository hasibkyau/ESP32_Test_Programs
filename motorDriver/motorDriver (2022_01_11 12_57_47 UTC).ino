#include<AFMotor.h>
#include <Servo.h>
const int trigpin = 7;
const int ecopin = 6;

AF_DCMotor leftmotor(1);
AF_DCMotor rightmotor(2);

void setup() {

  Serial.begin(9600);

  pinMode(trigpin, OUTPUT);
  pinMode(ecopin, INPUT);

  leftmotor.setSpeed(200);
  rightmotor.setSpeed(200);

  leftmotor.run(RELEASE);
  rightmotor.run(RELEASE);

}


void loop() {

  rightmotor.run(FORWARD);
  leftmotor.run(FORWARD);

//  long distance = Ultrasonic();
//  Serial.println(distance);
//
//  if (distance <= 50) {
//    rightmotor.run(RELEASE);
//    leftmotor.run(RELEASE);
//    delay(500);
//
//    rightmotor.run(BACKWARD);
//    leftmotor.run(FORWARD);
//  }



}



long Ultrasonic()
{
  long duration, cm;

  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delay(500);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(ecopin, HIGH);

  cm = duration / 2 * 0.0343;

  return cm;

}
