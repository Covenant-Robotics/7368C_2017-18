/*
#include "main.h"

#define CYCLE_TIME 2 //loop delay in milliseconds


int leftIME, rightIME;

static void i2cHandler(void* ignore) {
  int num_IMEs_initialized = imeInitializeAll();

uint32_t now = millis();
while(true) {
  imeGet(IME_LEFT, &leftIME);
  imeGet(IME_RIGHT, &rightIME);

  taskDelayUntil(&now, CYCLE_TIME);
}
}

int driveGetPos() {
  return ((leftIME + rightIME) / 2);
}

int driveRightPos() {
  return (rightIME);
}

int driveLeftPos() {
  return (leftIME);
}

void driveReset() {
  imeReset(IME_LEFT);
  imeReset(IME_RIGHT);
}
void i2cTaskStart() {
taskCreate(i2cHandler, TASK_DEFAULT_STACK_SIZE, NULL, (TASK_PRIORITY_DEFAULT + 2));
}
*/
