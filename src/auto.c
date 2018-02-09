#include "main.h"

void autonomous() {

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
    while(analogRead(MOGO_POT) > 1510){          // Mogo intake out
      mogoSet(-127);
      delay(20);
    }
    rackSet(0);                                 //stop rack
    mogoSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() < 5000){                //drive into mogo
      driveSet(80, 80);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
    delay(200);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) > 100){         //intake mogo
      mogoSet(127);
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
/*
    clawSet(100);                               //stack the preload cone
    delay(300);
    clawSet(0);
*/
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
    while (driveGetPos() > -325) {
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
      mogoSet(-127);
      delay(20);
    }
    mogoSet(0);
    ////////////////////////////////////////////
    driveSet(-80,-80);                          //drive out of scoring zone
    delay(500);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) > 100){         //return mogo intake
      mogoSet(80);
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
////                ?????????????     RIGHT MIDDLE AUTON        ?????????????               ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_2) == 1){
  driveReset();
    delay(20);
  rackSet(127);                               // Rack out
    delay(1200);
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 700) {         //Lift up
    liftSet(80);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() < 220) {                //Drive forward
    driveSet(40, 40);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(500);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1305){         // Lift Down
      liftSet(-40);
      delay(20);
    }
  while(analogRead(LIFT_POT) < 1350){
    liftSet(-40);
    rackSet(127);
  }
  ////////////////////////////////////////////
  driveReset();
  while(driveGetPos() < 90) {
    driveSet(40, 40);
  }
  while(analogRead(LIFT_POT) > 920){         //Lift up to clear stationary goals
    liftSet(127);
  }
  liftSet(0);
  ////////////////////////////////////////////
  // clawSet(100);                             // Open claw
  ////////////////////////////////////////////
  //stuff deleted
  //clawSet(0);
  ////////////////////////////////////////////
  delay(300);                                  // Turn out of 5-point zone
  driveSet(-80, 0);
  delay(1000);
  ////////////////////////////////////////////
  driveSet(-60, -45);                         // Back up while turning slightly
  delay(1000);
  ////////////////////////////////////////////
  driveSet(-45, 45);                          // Turn to face mogo
  delay(500);
  ////////////////////////////////////////////
  driveSet(0, 0);
  driveReset();
}
// end right middle auton
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
  while(analogRead(MOGO_POT) > 1510){          //mogo intake out
    mogoSet(-127);
    delay(20);
  }
  rackSet(0);                                 //stop rack
  mogoSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() < 5000){                //drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1305){         //intake mogo
    mogoSet(127);
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
  //clawSet(-100);                               //stack cone
  //delay(300);
  //clawSet(0);
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
  while(driveGetPos() < 275) {                 //turn even more?
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
    mogoSet(-127);
    delay(20);
  }
  mogoSet(0);
  driveSet(-80,-80);
  delay(500);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 100){         //mogo intake up
    mogoSet(80);
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
////////////////////////////////////////////////////////////////////////////////////////////////
////                ?????????????     LEFT MIDDLE AUTON        ?????????????                ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_4) == 1){
  driveReset();
    delay(20);
  rackSet(127);                               // Rack out
    delay(1200);
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 700) {         //Lift up
    liftSet(80);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() < 220) {                //Drive forward
    driveSet(40, 40);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(500);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1305){         // Lift Down
      liftSet(-40);
      delay(20);
    }
  while(analogRead(LIFT_POT) < 1350){
    liftSet(-40);
    rackSet(127);
  }
  driveReset();
  while(driveGetPos() < 100) {
    driveSet(40, 40);
  }
  while(analogRead(LIFT_POT) > 920){         //Lift up to clear stationary goals
    liftSet(127);
  }
  liftSet(0);
  ////////////////////////////////////////////
  // clawSet(100);                            // Open claw
  ////////////////////////////////////////////
  //stuff deleted
  //clawSet(0);
  ////////////////////////////////////////////
  delay(300);                                 // Turn out of 5-point zone
  driveSet(0, -80);
  delay(1000);
  ////////////////////////////////////////////
  driveSet(-45, -60);                         // Back up while turning slightly
  delay(1000);
  ////////////////////////////////////////////
  driveSet(45, -45);                          // Turn to face mogo
  delay(500);
  ////////////////////////////////////////////
  driveSet(0, 0);
}
// end left middle auton

} // end autnomous

/*
  if(digitalRead(JUMPER_2) == 0){
        rackSet(127);
        delay(760);
        rackSet(0);
        while(analogRead(LIFT_POT) > 870){         //Lift up to clear mogo intake
          liftSet(127);
        }
        liftSet(0);
        driveSet(45, 45);
        delay(785);
        driveSet(0, 0);
        rackSet(-127);
        delay(800);
        rackSet(0);
        while(analogRead(LIFT_POT) < 1305){          // Lift Down
            liftSet(-40);
            delay(20);
          }
        while(analogRead(LIFT_POT) < 1400){
          liftSet(-40);
          rackSet(127);
        }
        delay(100);
        liftSet(0);
        delay(450);
        rackSet(0);
        delay(500);
        while(analogRead(LIFT_POT) > 920){         //Lift up to clear stationary goal
          liftSet(127);
        }
        liftSet(0);
        driveSet(0, -100);
        delay(900);
        driveSet(-45, -45);
        delay(1000);
        driveSet(0, 0);
      }

      if(digitalRead(JUMPER_3) == 0){
            rackSet(127);
            delay(760);
            rackSet(0);
            while(analogRead(LIFT_POT) > 870){         //Lift up to clear mogo intake
              liftSet(127);
            }
            liftSet(0);
            driveSet(45, 45);
            delay(785);
            driveSet(0, 0);
            rackSet(-127);
            delay(800);
            rackSet(0);
            while(analogRead(LIFT_POT) < 1305){          // Lift Down
                liftSet(-40);
                delay(20);
              }
            while(analogRead(LIFT_POT) < 1400){
              liftSet(-40);
              rackSet(127);
            }
            delay(100);
            liftSet(0);
            delay(450);
            rackSet(0);
            delay(500);
            while(analogRead(LIFT_POT) > 920){         //Lift up to clear stationary goals
              liftSet(127);
            }
            liftSet(0);
            driveSet(-100, 0);
            delay(900);
            driveSet(-45, -45);
            delay(1000);
            driveSet(0, 0);
          }
*/
