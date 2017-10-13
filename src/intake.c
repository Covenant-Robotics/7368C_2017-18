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
void liftSet (int lift) {
  blrsMotorSet(MOTOR_LIFT_LEFT, lift, false); // slot 6
  blrsMotorSet(MOTOR_LIFT_RIGHT, lift, false); // slot 7
}

// Motor Controls for Claw
void clawSet(int claw) {
  blrsMotorSet(MOTOR_CLAW, claw, false); // slot 10

}

// Motor Controls for Rack and Pinion intake
void rackSet(int rack) {
  blrsMotorSet(MOTOR_RACK_LEFT, rack, false); //slot 8
  blrsMotorSet(MOTOR_RACK_RIGHT, rack, false); //slot 9

}

//Initialize Stuff

void intakeInit(){
  blrsMotorInit(MOTOR_RACK_LEFT, false , NULL, NULL);
  blrsMotorInit(MOTOR_RACK_RIGHT, false , NULL, NULL);
  blrsMotorInit(MOTOR_LIFT_LEFT, false , NULL, NULL);
  blrsMotorInit(MOTOR_LIFT_RIGHT, false , NULL, NULL);
  blrsMotorInit(MOTOR_CLAW, false , NULL, NULL);
}
