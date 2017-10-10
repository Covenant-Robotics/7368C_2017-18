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
  blrsMotorSet(MOTOR_LIFT_LEFT, lift, false); // slot 6
  blrsMotorSet(MOTOR_LIFT_RIGHT, lift, false); // slot 7
}

void clawGo(int claw) {
  blrsMotorSet(MOTOR_CLAW, claw, false); // slot 10
}
