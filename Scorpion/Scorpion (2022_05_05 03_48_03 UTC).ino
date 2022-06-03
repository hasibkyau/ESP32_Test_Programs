//#include "sonor.h"
//#include "motor.h"
#include "Scorpion.h"

#define LED_PIN 13
Motor motorA(27, 26, 14);  //(in1, in2, en)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  motorA.Forward();
}

void loop() {
  // put your main code here, to run repeatedly:
  //motor_driver();
  //sonorA();
  //led.on();
  
}
