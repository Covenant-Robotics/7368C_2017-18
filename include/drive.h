#ifndef _CHASSIS_H_
#define _CHASSIS_H_

// int driveLeftPos();

// int driveRightPos();

// Sets the speeds of the left and right wheels of the chassis
void driveSet(int left, int right);

void driveInit();

void imeInit();

void driveReset();

int driveGetPos();

#endif
