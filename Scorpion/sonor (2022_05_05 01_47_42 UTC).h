#ifndef SETUP_A
#define SETUP_A

#include <Arduino.h>
#include <HCSR04.h>

HCSR04 sonarA(22, 23); //initialisation class HCSR04 (trig pin , echo pin)
HCSR04 sonarB(12, 21); //initialisation class HCSR04 (trig pin , echo pin)
HCSR04 sonarC(2, 15); //initialisation class HCSR04 (trig pin , echo pin)

int *sonar;
int mySonar[3];


//int * read_sonor()
//{
//      mySonar[0] = sonarA.dist();
//      mySonar[1] = sonarB.dist();
//      mySonar[2] = sonarC.dist();
//      
//    return mySonar;
//    //delay(60);                 // we suggest to use over 60ms measurement cycle, in order to prevent trigger signal to the echo signal.
//}

void sonorA(){
  int distance = sonarA.dist();
      Serial.println(distance);
}

#endif
