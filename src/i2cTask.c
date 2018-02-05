/*

#include "main.h"

#define CYCLE_TIME 2 //loop delay in milliseconds

volatile int32_t leftIME, rightIME;

static void i2cHandler(void* ignore) {
  imeInit();
  }

  uint32_t now = millis(); {
  while(true) {
    driveGetPos();
    taskDelayUntil(&now, CYCLE_TIME);
  }
}

void i2cTaskStart() {
  taskCreate(i2cHandler, TASK_DEFAULT_STACK_SIZE, NULL, (TASK_PRIORITY_DEFAULT + 2));
}

*/
