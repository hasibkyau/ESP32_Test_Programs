#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class Motor {
  private:
    byte in1;
    byte in2;
    byte en;

  public:
    Motor(byte in1, byte in2, byte en);
    void Forward();
    void Backward();
    void Release();
};

#endif
