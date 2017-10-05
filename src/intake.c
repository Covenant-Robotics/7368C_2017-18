/*
Mobile Goal intake and Cone intake
*/
#include "main.h"

// Stuff for mobile goal intake
// Pneumatics
void mobilegoal(bool down)
{
  digitalWrite(1, down);
}

//Motor Controls for Rack and Pinion intake
void liftSet (int lift) {
  blrsMotorSet(MOTOR_RACK_LEFT, lift, false); //slot 8
  blrsMotorSet(MOTOR_RACK_RIGHT, lift, false); //slot 9
}
