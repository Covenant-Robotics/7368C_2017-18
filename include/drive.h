#ifndef _CHASSIS_H_
#define _CHASSIS_H_

#include "API.h"
// Sets the speeds of the left and right wheels of the chassis
void driveSet(int left, int right);

void driveInit();

int chassisGetPos();

// Makes the thing for the slow drive into ten point zone
void tenPtZone(bool down);

#endif
