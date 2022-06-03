#include "Motor.h"

Motor::Motor(byte in1, byte in2, byte en)
{
  this -> in1 = in1;
  this -> in2 = in2;
  this -> en = en;
}

void Motor::Forward(){
  Serial.println("Forward");
  };

void Motor::Backward(){
  Serial.println("Forward");
};

void Motor::Release(){
  Serial.println("Forward");
};

