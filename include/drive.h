#ifndef _CHASSIS_H_
#define _CHASSIS_H_

#include "API.h"
// Sets the speeds of the left and right wheels of the chassis
void chassisSet(int left, int right);

void chassisInit();

int chassisGetPos();

#endif