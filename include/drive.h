#ifndef _CHASSIS_H_
#define _CHASSIS_H_

// Sets the speeds of the left and right wheels of the chassis
void driveSet(int left, int right);

void driveInit();

void driveReset();

int driveGetPos();

int driveRightPos();

int driveLeftPos();

#endif
