
#include "main.h"

 void initializeIO() {
   pinMode(JUMPER_1, INPUT);
   pinMode(JUMPER_2, INPUT);
   pinMode(JUMPER_3, INPUT);
   // watchdogInit();
 }

void initialize() {
  motorManagerInit();
  driveInit();
  intakeInit();
  imeInit();
  // i2cTaskStart();
}
