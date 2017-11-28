/*
Drive Code
*/
#include "main.h"

int driveLeftPos() {
  return encoderGet(leftEncoder);
}

int driveRightPos() {
  return encoderGet(rightEncoder);
}

void driveSet (int left, int right)
{
  blrsMotorSet(LEFT_FRONT, left, false); //slot 2
  blrsMotorSet(LEFT_BACK, left, false); //slot 3,
  blrsMotorSet(RIGHT_FRONT, right, false); //slot 4,
  blrsMotorSet(RIGHT_BACK, right, false); //slot 5
}

void driveInit()
{
  leftEncoder = encoderInit(ENCODER_LEFT_TOP, ENCODER_LEFT_BOTTOM, false);
  rightEncoder = encoderInit(ENCODER_RIGHT_TOP, ENCODER_RIGHT_BOTTOM, false);
  blrsMotorInit(LEFT_FRONT, true , 0.5f, NULL);
  blrsMotorInit(LEFT_BACK, true , 0.5f, NULL);
  blrsMotorInit(RIGHT_FRONT, true , 0.5f, NULL);
  blrsMotorInit(RIGHT_BACK, false , 0.5f, NULL);
}

void driveReset (){
  encoderReset(leftEncoder);
  encoderReset(rightEncoder);
}

int driveGetPos(){
  int leftPos, rightPos;
  leftPos = encoderGet(leftEncoder);
  rightPos = encoderGet(rightEncoder);
  return ((leftPos + rightPos) / 2);
}
