/*
Drive Code
*/
#include "main.h"
/*
Encoder leftEncoder, rightEncoder;

int driveLeftPos() {
  return encoderGet(leftEncoder);
}

int driveRightPos() {
  return encoderGet(rightEncoder);
}
*/
void driveSet (int left, int right)
{
  blrsMotorSet(LEFT_FRONT, left, false); //slot 2
  blrsMotorSet(LEFT_BACK, left, false); //slot 3,
  blrsMotorSet(RIGHT_FRONT, right, false); //slot 4,
  blrsMotorSet(RIGHT_BACK, right, false); //slot 5
}

void driveInit()
{
  // leftEncoder = encoderInit(ENCODER_LEFT_TOP, ENCODER_LEFT_BOTTOM, true);
  // rightEncoder = encoderInit(ENCODER_RIGHT_TOP, ENCODER_RIGHT_BOTTOM, true);
  blrsMotorInit(LEFT_FRONT, true , 0.5f, NULL);
  blrsMotorInit(LEFT_BACK, false , 0.5f, NULL);
  blrsMotorInit(RIGHT_FRONT, true , 0.5f, NULL);
  blrsMotorInit(RIGHT_BACK, true , 0.5f, NULL);
}

void imeInit()
{
  int num_IMEs_initialized = imeInitializeAll();
  if (num_IMEs_initialized != NUM_IME) {
}
}

void driveReset (){
  // encoderReset(leftEncoder);
  // encoderReset(rightEncoder);
  imeReset(IME_LEFT);
  imeReset(IME_RIGHT);
}

int driveLeftPos() {
  int driveLeftPos;
  imeGet(IME_LEFT, &driveLeftPos);
  return driveLeftPos;
}

int driveRightPos() {
  int driveRightPos;
  imeGet(IME_RIGHT, &driveRightPos);
  return driveRightPos;
}

int driveGetPos() {
  int leftPos, rightPos;
  leftPos = imeGet(IME_LEFT, &leftPos);
  rightPos = imeGet(IME_RIGHT, &rightPos);
  return ((leftPos + rightPos) / 2);
}
