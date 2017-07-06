/*
Drive Code
*/
#include "main.h"

void driveSet (int left, int right) {
blrsMotorSet(MOTOR_LEFT_FRONT, left, false);
blrsMotorSet(MOTOR_LEFT_BACK, left, false);
blrsMotorSet(MOTOR_RIGHT_FRONT, right, false);
blrsMotorSet(MOTOR_RIGHT_BACK, right, false);

}

void driveInit(){
  blrsMotorInit(MOTOR_LEFT_FRONT,false,NULL,NULL);
  blrsMotorInit(MOTOR_LEFT_BACK,false,NULL,NULL);
  blrsMotorInit(MOTOR_RIGHT_FRONT,false,NULL,NULL);
  blrsMotorInit(MOTOR_RIGHT_BACK,false,NULL,NULL);
}
