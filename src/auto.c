#include "main.h"

void autonomous() {

  ////////////////////////////////////////////////////////////////////////////////////////////////
  ////                ?????????????     LEFT MIDDLE AUTON        ?????????????                ////
  ////////////////////////////////////////////////////////////////////////////////////////////////
  if(digitalRead(JUMPER_1) == 0){
    driveReset();
      delay(20);
    rackSet(127);                               // Rack out
      delay(1000);
    rackSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() < 100) {
      driveSet(127, 0);
    }
    while(analogRead(LIFT_POT) > 700) {         //Lift up
      liftSet(80);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() < 230) {                //Drive forward
      driveSet(40, 40);
      delay(20);
    }
    driveSet(0, 0);
    delay(500);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) < 1305){         // Lift Down
        liftSet(-40);
        delay(20);
      }
    while(analogRead(LIFT_POT) < 1345){
      liftSet(-40);
      // rackSet(127);
      delay(20);
    }
    driveReset();
    delay(500);
    while(driveGetPos() < 60) {
      driveSet(40, 40);
      delay(20);
    }
    delay(300);
    while(analogRead(LIFT_POT) > 920){         //Lift up to clear stationary goals
      liftSet(127);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    // clawSet(100);                            // Open claw
    ////////////////////////////////////////////
    //stuff deleted
    //clawSet(0);
    ////////////////////////////////////////////
    delay(800);                                 // Turn out of 5-point zone
    driveSet(0, -80);
    delay(1000);
    ////////////////////////////////////////////
    driveSet(-45, -60);                         // Back up while turning slightly
    delay(1000);
    ////////////////////////////////////////////
    // driveSet(45, -45);                          // Turn to face mogo
    // delay(500);
    ////////////////////////////////////////////
    driveSet(0, 0);
  } // end left middle auton
  ////////////////////////////////////////////////////////////////////////////////////////////////
  ////                ?????????????     RIGHT MIDDLE AUTON        ?????????????               ////
  ////////////////////////////////////////////////////////////////////////////////////////////////
  else if(digitalRead(JUMPER_2) == 0){
    driveReset();
      delay(20);
    rackSet(127);                               // Rack out
      delay(1000);
    rackSet(0);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 700) {         //Lift up
      liftSet(80);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() < 230) {                //Drive forward
      driveSet(40, 40);
      delay(20);
    }
    driveSet(0, 0);
    delay(500);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) < 1305){         // Lift Down
        liftSet(-40);
        delay(20);
      }
    while(analogRead(LIFT_POT) < 1345){
      liftSet(-40);
      // rackSet(127);
      delay(20);
    }
    driveReset();
    delay(500);
    ////////////////////////////////////////////
    while(driveGetPos() < 60) {
      driveSet(40, 40);
      delay(20);
    }
    delay(300);
    while(analogRead(LIFT_POT) > 920){         //Lift up to clear stationary goals
      liftSet(127);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    // clawSet(100);                             // Open claw
    ////////////////////////////////////////////
    //stuff deleted
    //clawSet(0);
    ////////////////////////////////////////////
    delay(800);                                  // Turn out of 5-point zone
    driveSet(-80, 0);
    delay(1000);
    ////////////////////////////////////////////
    driveSet(-60, -45);                         // Back up while turning slightly
    delay(1000);
    ////////////////////////////////////////////
    // driveSet(-45, 45);                          // Turn to face mogo
    // delay(500);
    ////////////////////////////////////////////
    driveSet(0, 0);
    driveReset();
  } // end right middle auton
////////////////////////////////////////////////////////////////////////////////////////////////
////            ?????????????           LEFT 5-pt AUTON           ?????????????             ////
////////////////////////////////////////////////////////////////////////////////////////////////
  else if(digitalRead(JUMPER_3) == 0){
    driveReset();
    rackSet(127);
    delay(600);                                 // Finish rack out
    rackSet(0);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 1300){         // Lift up to clear mogo intake
      liftSet(127);
      rackSet(-127);                            // Rack back in
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) < 1510){          // Mogo intake out
      mogoSet(-90);
      delay(20);
    }
    rackSet(0);                                 // Stop rack
    mogoSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() < 1500){                // Drive into mogo
      driveSet(80, 80);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
    delay(200);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) > 100){         // Intake mogo
      mogoSet(127);
      delay(20);
    }
    mogoSet(0);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) < 1400){         // Drop arm
      liftSet(-100);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() > -300){                // Return to scoring zone
      driveSet(-80, -80);
      delay(20);
    }
    ////////////////////////////////////////////
    while(driveGetPos() < 300) {                // Spin to face 5-pt zone
      driveSet(45, -45);
      delay(20);
    }
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) < 1510) {        // Drop mogo in 5-pt zone
      mogoSet(-90);
      delay(20);
    }
    driveReset();
    ////////////////////////////////////////////
    while(driveGetPos() > -100) {               // Back away from mogo
      driveSet(-80, -80);                       // so it is scored
      delay(20);
    }
  } // end left 5-pt auton
////////////////////////////////////////////////////////////////////////////////////////////////
////            ?????????????           RIGHT 5-pt AUTON           ?????????????            ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_4) == 0){
  driveReset();
  rackSet(127);
  delay(600);                                 // Finish rack out
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300){         // Lift up to clear mogo intake
    liftSet(127);
    rackSet(-127);                            // Rack back in
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1050){          // Mogo intake out
    mogoSet(-90);
    delay(20);
  }
  mogoSet(0);
  rackSet(0);                                 // Stop rack
  ////////////////////////////////////////////
  while(driveGetPos() < 1475){                // Drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 180){         // Intake mogo
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1400){         // Drop arm
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -340){                // Return to scoring zone
    driveSet(-80, -80);
    delay(20);
  }
  ////////////////////////////////////////////
  while(driveGetPos() < 25) {                // Spin to face 5-pt zone
    driveSet(45, -45);
    delay(20);
  }
  ////////////////////////////////////////////
  rackSet(127);
  delay(200);
  liftSet(-90);
  delay(600);
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 900) {
    liftSet(90);
    delay(20);
  }
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1000) {        // Drop mogo in 5-pt zone
    mogoSet(-90);
    delay(20);
  }
  mogoSet(0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() > -25) {                // Back away from mogo
    driveSet(-45, -45);                       // so it is scored
    delay(20);
  }
} // end right 5-pt auton
////////////////////////////////////////////////////////////////////////////////////////////////
////            ?????????????           LEFT 10-pt AUTON           ?????????????            ////
////////////////////////////////////////////////////////////////////////////////////////////////
  else if(digitalRead(JUMPER_5) == 0){
    driveReset();
    rackSet(127);
    delay(600);                                 // Finish Rack Out
    rackSet(0);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 1300){         // Lift up to clear mogo intake
      liftSet(127);
      rackSet(-127);                            // Rack back in
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) > 1510){         // Mogo intake out
      mogoSet(-90);
      delay(20);
    }
    rackSet(0);                                 // Stop rack
    mogoSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() < 1500){                // Drive into mogo
      driveSet(80, 80);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
    delay(200);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) > 100){          // Intake mogo
      mogoSet(127);
      delay(20);
    }
    mogoSet(0);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) < 1400){         // Drop arm
      liftSet(-100);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(driveGetPos() > -400){                // Return to scoring zone
      driveSet(-80, -80);
      delay(20);
    }
    ////////////////////////////////////////////

    //clawSet(100);
    //delay(300);
    //clawSet(0);

    ////////////////////////////////////////////
    while(driveGetPos() > -1300){               // Turn to face scoring zone
      driveSet(-40, 40);
      delay(20);
    }
    driveSet(0, 0);
    delay(750);
    driveReset();
    ////////////////////////////////////////////
    rackSet(127);                               // Let go of preload cone
    delay(1000);
    rackSet(0);
    ////////////////////////////////////////////
    while (driveGetPos() < 80) {                // Up to 10-pt zone
      driveSet(40, 40);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 1300){         // Arm height to clear mogo intake
      liftSet(80);
      delay(20);
    }
    liftSet(0);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) < 1510){          // Mogo out
      mogoSet(-90);
      delay(20);
    }
    mogoSet(0);
    ////////////////////////////////////////////
    driveSet(-80,-80);                          // Drive out of scoring zone
    delay(245);
    driveSet(0,0);
    ////////////////////////////////////////////
    while(analogRead(MOGO_POT) > 100){         // Return mogo intake
      mogoSet(127);
      delay(20);
    }
    mogoSet(0);
    driveReset();
  } // end left 10-pt auton
///////////////////////////////////////////////////////////////////////////////////////////////
////           ?????????????           RIGHT 10-pt AUTON           ?????????????           ////
///////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_6) == 0){
  driveReset();
  while(driveGetPos() < -100) {               // Spin left to face mogo
    driveSet(45, -45);
    rackSet(127);                             // Rack out
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(400);                                 // Finish Rack Out
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300){         // Lift up to clear mogo intake
    liftSet(127);
    rackSet(-127);                            // Rack back in
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 1510){         // Mogo intake out
    mogoSet(-90);
    delay(20);
  }
  rackSet(0);                                 // Stop rack
  mogoSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() < 1500){                // Drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 100){          // Intake mogo
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1400){         // Drop arm
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -400){                // Return to scoring zone
    driveSet(-80, -80);
    delay(20);
  }
  ////////////////////////////////////////////

  //clawSet(100);
  //delay(300);
  //clawSet(0);

  ////////////////////////////////////////////
  while(driveGetPos() > -1300){               // Turn to face scoring zone
    driveSet(40, -40);
    delay(20);
  }
  driveSet(0, 0);
  delay(750);
  driveReset();
  ////////////////////////////////////////////
  rackSet(127);                               // Let go of preload cone
  delay(1000);
  rackSet(0);
  ////////////////////////////////////////////
  while (driveGetPos() < 80) {                // Up to 10-pt zone
    driveSet(40, 40);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300){         // Arm height to clear mogo intake
    liftSet(80);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1510){         // Mogo out
    mogoSet(-90);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  driveSet(-80,-80);                          // Drive out of scoring zone
  delay(245);
  driveSet(0,0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 100){          // Return mogo intake
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  driveReset();
} // end right 10-pt auton

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
