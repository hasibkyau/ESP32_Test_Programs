#include "Scorpion.h"
#include <HCSR04.h>

HCSR04 sonarA(22, 23); //initialisation class HCSR04 (trig pin , echo pin)
HCSR04 sonarB(12, 21); //initialisation class HCSR04 (trig pin , echo pin)
HCSR04 sonarC(2, 15); //initialisation class HCSR04 (trig pin , echo pin)

//Using class "Motor" {methods = Forward, Backward, Stop, Speed, Status}
Motor motorA(27, 26, 14);  //(in1, in2, en)
Motor motorB(4, 5, 13);  //(in1, in2, en)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  
  Serial.println("After modification :");
  motorA.Forward();
  delay(2000);

  motorB.Speed(255);
  delay(2000);
}

void loop() {
  ActivateSonar();
  delay(60);
}

void ActivateSonar(){
  int S1 = sonarA.dist();
  Serial.println(S1);
  int S2 = sonarB.dist();
  Serial.println(S2);
  int S3 = sonarC.dist();
  Serial.println(S3);
  
  PutSonorData(S1, S2, S3);
}


