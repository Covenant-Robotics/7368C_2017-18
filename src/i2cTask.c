#include "main.h"

#define CYCLE_TIME 2 //loop delay in milliseconds

int counts;

static void i2cHandler(void* ignore) {
  int num_IMEs_initialized = imeInitializeAll();
  if (num_IMEs_initialized != NUM_IMES) {
    printf("ERROR: INCORRECT NUMBER OF IMEs INITIALIZED\n");
    }
  }

  uint32_t now = millis();

  int driveGetPos() {
    while(true) {
      imeGet(IME_LEFT, &counts);
      return(counts);
      taskDelayUntil(&now, CYCLE_TIME);
    }
  }

void i2cTaskStart() {
  taskCreate(i2cHandler, TASK_DEFAULT_STACK_SIZE, NULL, (TASK_PRIORITY_DEFAULT + 2));
}
