/*
Mobile Goal intake and Cone intake
*/
#include "main.h"

// Stuff for mobile goal intake
// Pneumatics
void mobilegoal(bool down)
{
  digitalWrite(1, down);
  digitalWrite(2, down);
}

// Motor Controls for Lift
void liftSet(int lift)
{
  blrsMotorSet(LIFT_LEFT, lift, false); // slot 6
  blrsMotorSet(LIFT_RIGHT, lift, false); // slot 7
}

// Motor Controls for Claw
void clawSet(int claw)
{
  blrsMotorSet(CLAW, claw, false); // slot 10
}

// Motor Controls for Rack and Pinion intake
void rackSet(int rack)
{
  blrsMotorSet(RACK_LEFT, rack, false); //slot 8
  blrsMotorSet(RACK_RIGHT, rack, false); //slot 9

}

//Initialize Stuff

void intakeInit()
{
  blrsMotorInit(RACK_LEFT, false , 0.5f, NULL);
  blrsMotorInit(RACK_RIGHT, true , 0.5f, NULL);
  blrsMotorInit(LIFT_LEFT, false , 0.5f, NULL);
  blrsMotorInit(LIFT_RIGHT, true , 0.5f, NULL);
  blrsMotorInit(CLAW, false , 0.5f, NULL);
}
