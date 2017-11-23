/*
Drive Code
*/
#include "main.h"

Encoder leftEncoder;

void driveSet (int left, int right)
{
  blrsMotorSet(LEFT_FRONT, left, false); //slot 2
  blrsMotorSet(LEFT_BACK, left, false); //slot 3,
  blrsMotorSet(RIGHT_FRONT, right, false); //slot 4,
  blrsMotorSet(RIGHT_BACK, right, false); //slot 5
}

void driveInit()
{
  blrsMotorInit(LEFT_FRONT, true , 0.5f, NULL);
  blrsMotorInit(LEFT_BACK, true , 0.5f, NULL);
  blrsMotorInit(RIGHT_FRONT, true , 0.5f, NULL);
  blrsMotorInit(RIGHT_BACK, false , 0.5f, NULL);
  leftEncoder = encoderInit(ENCODER_LEFT_TOP, ENCODER_LEFT_BOTTOM, false);
}

void driveReset (){
  encoderReset(leftEncoder);
}

int driveGetPos(){
  int leftPos;
  leftPos = encoderGet(leftEncoder);
  return (leftPos);
}
