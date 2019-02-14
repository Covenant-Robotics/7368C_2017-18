
#include "main.h"

 void initializeIO() {
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(7, INPUT);
   pinMode(8, INPUT);
   // watchdogInit();
 }

void initialize() {
  motorManagerInit();
  driveInit();
  intakeInit();
  imeInit();
  // i2cTaskStart();
}
