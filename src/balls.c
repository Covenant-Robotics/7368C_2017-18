// Mobile Goal intake and Cone intake

#include "main.h"

void punchySet(int speed) {
  blrsMotorSet(PUNCH_RIGHT, speed, false);
  blrsMotorSet(PUNCH_LEFTIE, speed, false);
}

void spinnySet(int spin){
  blrsMotorSet(BIG_SPINS, spin, false);
  blrsMotorSet(TOP_SPINS, spin, false);
}
/*
void angleSet(int angle){
  blrsMotorSet(ANGLE_MASTER, angle, false);
}
*/
void intakeInit() {
  blrsMotorInit(PUNCH_RIGHT, true, 0.5f, NULL);
  blrsMotorInit(PUNCH_LEFTIE, false, 0.5f, NULL);
  blrsMotorInit(BIG_SPINS, false, 0.5f, NULL);
  blrsMotorInit(TOP_SPINS, true, 0.5f, NULL);
}
/*

void liftSet(int lift) {
  blrsMotorSet(LIFT, lift, false);
}

void flipperSet(int flip){
  blrsMotorSet(CAP_FLIPPER, flip, false);
}

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


void intakeInit(){
  blrsMotorInit(RACK, true, 0.5f, NULL);
  blrsMotorInit(LIFT, false , 0.5f, NULL);
  blrsMotorInit(RACK, true , 0.5f, NULL);
  blrsMotorInit(MOGO, false , 0.5f, NULL);
}
*/
