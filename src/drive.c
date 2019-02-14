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
}

void imeInit()
{
  imeInitializeAll();
  watchdogInit();
}

int driveGetPos() {
  imeGet(0, &counts);
  return counts;
}



void driveReset (){
  imeReset(0);
}

/*
 int driveLeftPos() {
  return encoderGet(leftEncoder);
}

 int driveRightPos() {
   int rt;
   rt = encoderGet(rightEncoder);
   return rt;
 }

 int driveGetPos() {
  int leftPos, rightPos;
  leftPos = encoderGet(leftEncoder);
  rightPos = encoderGet(rightEncoder);
  return ((leftPos + rightPos) / 2);
}
*/
/*
int driveGetPos() {
  int leftCounts, rightCounts;
  imeGet(IME_RIGHT, &rightCounts);
  imeGet(IME_LEFT, &leftCounts);
  counts = (leftCounts + rightCounts) / 2;
  return counts;
}
*/
