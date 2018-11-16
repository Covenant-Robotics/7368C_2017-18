// Mobile Goal intake and Cone intake

#include "main.h"

void puncherSet(int speed) {
  blrsMotorSet(PUNCHER, speed, false);
}

void liftSet(int lift) {
  blrsMotorSet(LIFT, lift, false);
}

void flipperSet(int flip){
  blrsMotorSet(CAP_FLIPPER, flip, false);
}

void spinnerSet(int spin){
  blrsMotorSet(SPINNER_INTAKE, spin, false);
}

void indexerSet(int index){
  blrsMotorSet(INDEXER, index, false);
}

void intakeInit() {
  blrsMotorInit(PUNCHER, false, 0.5f, NULL);
  blrsMotorInit(LIFT, true, 0.5f, NULL);
  blrsMotorInit(CAP_FLIPPER, true, 0.5f, NULL);
  blrsMotorInit(SPINNER_INTAKE, false, 0.5f, NULL);
  blrsMotorInit(INDEXER, false, 0.5f, NULL);
}
/*
// Stuff for mobile goal intake
// Pneumatics
void mobilegoal(bool down)
{
  digitalWrite(1, down);
  //digitalWrite(2, down);
}


// Motor Controls for Lift
void mogoSet(int goal)
{
  blrsMotorSet(MOGO, goal, false);
}
// Motor Controls for Lift
void liftSet(int lift)
{
  blrsMotorSet(LIFT, lift, false);
}

// Motor Controls for Claw
void clawSet(int claw)
{
  blrsMotorSet(RACK, claw, false); // slot 10
}

// Motor Controls for Rack and Pinion intake
void rackSet(int rack)
{
  blrsMotorSet(RACK, rack, false); //slot 8
}

//Initialize Stuff

void intakeInit()
{
  blrsMotorInit(RACK, true, 0.5f, NULL);
  blrsMotorInit(LIFT, false , 0.5f, NULL);
  blrsMotorInit(RACK, true , 0.5f, NULL);
  blrsMotorInit(MOGO, false , 0.5f, NULL);
}
*/
