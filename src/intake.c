// Mobile Goal intake and Cone intake

#include "main.h"

/*
// Stuff for mobile goal intake
// Pneumatics
void mobilegoal(bool down)
{
  digitalWrite(1, down);
  //digitalWrite(2, down);
}
*/

// Motor Controls for Lift
void goalSet(int goal)
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
  blrsMotorSet(CLAW, claw, false); // slot 10
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
  blrsMotorInit(CLAW, false , 0.5f, NULL);
  blrsMotorInit(MOGO, false , 0.5f, NULL);
}
