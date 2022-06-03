#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class Motor {
  private:
    byte in1;
    byte in2;
    byte en;
    const int freq = 30000;
    const int pwmChannel = 0;
    const int resolution = 8;
    int dutyCycle = 200;

  public:
    Motor(byte in1, byte in2, byte en) {
      this -> in1 = in1;
      this -> in2 = in2;
      this -> en = en;

    };

    void init() {
      // sets the pins as outputs:
      pinMode(in1, OUTPUT);
      pinMode(in2, OUTPUT);
      pinMode(en, OUTPUT);

      // configure LED PWM functionalitites
      ledcSetup(pwmChannel, freq, resolution);

      // attach the channel to the GPIO to be controlled
      ledcAttachPin(en, pwmChannel);
    }

    void Forward() {
      Serial.println("Forward");
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      ledcWrite(pwmChannel, dutyCycle);
      dutyCycle = 255;
    };

    void Backward() {
      Serial.println("Backward");
    };

    void Release() {
      Serial.println("Release");
    };
};

#endif
