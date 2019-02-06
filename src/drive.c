/*
Drive Code
*/
#include "main.h"

int counts;

void driveSet (int left, int right)
{
  blrsMotorSet(LEFT_DRIVE, left, false); //slot 2
  blrsMotorSet(LEFT_DRIVE_2, left, false); //slot 3,
  blrsMotorSet(RIGHT_DRIVE, right, false); //slot 4,
  blrsMotorSet(RIGHT_DRIVE_2, right, false); //slot 5
}

void driveInit()
{
  // leftEncoder = encoderInit(ENCODER_LEFT_TOP, ENCODER_LEFT_BOTTOM, false);
  // rightEncoder = encoderInit(ENCODER_RIGHT_TOP, ENCODER_RIGHT_BOTTOM, false);
  blrsMotorInit(LEFT_DRIVE, true , 0.5f, NULL);
  blrsMotorInit(LEFT_DRIVE_2, false , 0.5f, NULL);
  blrsMotorInit(RIGHT_DRIVE, false , 0.5f, NULL);
  blrsMotorInit(RIGHT_DRIVE_2, true , 0.5f, NULL);
  imeInitializeAll();
}

int driveLeftPos() {
  int left;
  imeGet(IME_LEFT, &left);
  return (left);
}


int driveRightPos() {
  int right;
  imeGet(IME_RIGHT, &right);
  return(right);
}


void driveReset (){
  // encoderReset(leftEncoder);
  // encoderReset(rightEncoder);
  imeReset(IME_LEFT);
  imeReset(IME_RIGHT);
}

/*
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
*/
/*
 int driveGetPos() {
  int leftPos, rightPos;
  leftPos = encoderGet(leftEncoder);
  rightPos = encoderGet(rightEncoder);
  return ((leftPos + rightPos) / 2);
}
*/

int driveGetPos() {
  imeGet(IME_LEFT, &counts);
  return counts;
}
