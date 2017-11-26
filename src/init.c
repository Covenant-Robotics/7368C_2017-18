
#include "main.h"

 void initializeIO() {
   pinMode(JUMPER_1, INPUT);
   pinMode(JUMPER_2, INPUT);
   pinMode(JUMPER_3, INPUT);
 }

void initialize() {
  motorManagerInit();
  driveInit();
  intakeInit();
}
