#include "main.h"

void autonomous() {
/*
        clawSet(-80);
        rackSet(127);
        delay(50);
        clawSet(0);
        delay(950);
        rackSet(0);
        clawSet(-80);
        // driveSet(127, 127);
*/
////////////////////////////////////////////////////////////////////////////////////////////////
////               ?????????????           LEFT AUTON           ?????????????               ////
////////////////////////////////////////////////////////////////////////////////////////////////
  if(digitalRead(JUMPER_1) == 1){
    driveReset();
      delay(20);
    rackSet(127);                               // Rack out for 1 second
      delay(1000);
    rackSet(0);

    while(analogRead(LIFT_POT) > 1300){         //Lift up to clear mogo intake
      liftSet(127);
      rackSet(-127);                            // Rack back in
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) < 1510){          // Mogo intake out
      mogoSet(127);
      delay(20);
    }
    rackSet(0);                                 //stop rack
    mogoSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() < 1400){                //drive into mogo
      driveSet(80, 80);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
    delay(200);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) > 100){         //intake mogo
      mogoSet(-127);
      delay(20);
    }
    mogoSet(0);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) < 1400){         //drop the arm back down
      liftSet(-100);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    clawSet(100);                               //stack the preload cone
    delay(300);
    clawSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() > -400){                //return to scoring zone
      driveSet(-80, -80);
      delay(20);
    }
    ////////////////////////////////////////////
    while(driveGetPos() > -1300){               //turn to face scoring zone
      driveSet(-60, -20);
      delay(20);
    }
    driveSet(0, 0);
    delay(750);
    driveReset();
    //////////////////////////////////////////////turn even more?
    while (driveLeftPos() > -325 || driveRightPos() < 325) {
      driveSet(-40, 40);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 1300){         //arm height to clear mogo intake
      liftSet(80);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) < 1510){          // out of mogo intake
      mogoSet(127);
      delay(20);
    }
    mogoSet(0);
    ////////////////////////////////////////////
    driveSet(-80,-80);                          //drive out of scoring zone
    delay(500);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) > 100){         //return mogo intake
      mogoSet(-80);
      delay(20);
    }
    mogoSet(0);
    driveReset();
    ////////////////////////////////////////////
    while(driveGetPos() > -300){
      driveSet(-127, -127);
      delay(20);
    }
      driveSet(0,0);
  }
// end left auton
////////////////////////////////////////////////////////////////////////////////////////////////
////              ?????????????           MIDDLE AUTON           ?????????????              ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_2) == 1){
  driveReset();
    delay(20);
  rackSet(127);                               // Rack out
    delay(1300);
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 700) {         //Lift up
    liftSet(80);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() < 325) {                //Drive forward
    driveSet(25, 25);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(500);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 800){          // Lift Down
      liftSet(-40);
      delay(20);
    }
    liftSet(0);
    delay(500);
    ////////////////////////////////////////////
    clawSet(100);                               // Open claw
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 700){          // Lift Up
      liftSet(80);
      delay(20);
    }
    liftSet(0);
    clawSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() > 225) {                //Drive backward
      driveSet(-25, -25);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
}
// end middle auton
///////////////////////////////////////////////////////////////////////////////////////////////
////              ?????????????           RIGHT AUTON           ?????????????              ////
///////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_3) == 1){
  driveReset();
    delay(20);
  rackSet(127);                               // Rack out for 1 second
    delay(1000);
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300){         //lift out of mogo intake
  liftSet(127);
  rackSet(-127);                              //rack goes back in
  delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1510){          //mogo intake out
    mogoSet(127);
    delay(20);
  }
  rackSet(0);                                 //stop rack
  mogoSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() < 1250){                //drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 100){         //intake mogo
    mogoSet(-127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1400){          //drop the arm back down
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  clawSet(-100);                               //stack cone
  delay(300);
  clawSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -600){                //return to scoring zone
    driveSet(-100, -100);
    delay(20);
  }
  ////////////////////////////////////////////
  while(driveGetPos() > -1300){               //turn to face scoring zone
    driveSet(-20, -60);
    delay(20);
  }
  driveSet(0, 0);
  delay(750);
  driveReset();
  ////////////////////////////////////////////
  while(driveLeftPos() < 275 || driveRightPos() > -275) {                 //turn even more?
    driveSet(40, -40);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() < 500){                 //drive into scoring zone
    driveSet(127, 127);
    delay(20);
  }
  driveSet(0,0);
  driveReset();
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300){         //lift out of mogo intake
    liftSet(80);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1510){         //mogo down
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  driveSet(-80,-80);
  delay(500);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 100){         //mogo intake up
    mogoSet(-80);
    delay(20);
  }
  mogoSet(0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() > -300){                //drive out of scoring zone
    driveSet(-127, -127);
    delay(20);
  }
  driveSet(0,0);
} // end right auton

} // end autnomous
