/*
Drive Code
*/
#include "main.h"

void driveSet (int left, int right) {
  blrsMotorSet(MOTOR_LEFT_FRONT, left, false); //slot 2
  blrsMotorSet(MOTOR_LEFT_BACK, left, false); //slot 3, oppsite
  blrsMotorSet(MOTOR_RIGHT_FRONT, right, false); //slot 4, oppsite
  blrsMotorSet(MOTOR_RIGHT_BACK, right, false); //slot 5

}

void driveInit(){
  blrsMotorInit(MOTOR_LEFT_FRONT, false , 0.5f, NULL);
  blrsMotorInit(MOTOR_LEFT_BACK, true , 0.5f, NULL);
  blrsMotorInit(MOTOR_RIGHT_FRONT, true , 0.5f, NULL);
  blrsMotorInit(MOTOR_RIGHT_BACK, false , 0.5f, NULL);
}
