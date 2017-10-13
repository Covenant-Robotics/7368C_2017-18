#ifndef INTAKE_H_
#define INTAKE_H_

#include "API.h"
// Creates stuff for Mobile Goal Intake
// Pneumatics
void mobilegoal(bool down);

// Creates stuff for Lift
// Motors
void liftSet(int lift);

// Creates stuff for rack and pinion
// Motors
void rackSet(int rack);

//Creates stuff for claw
//Motors
void clawSet(int claw);

// Lets us initialize all the intake motors
void intakeInit();
#endif
