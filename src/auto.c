#include "main.h"
/*
1 means limit switch is not pressed
0 means limit switch is pressed
*/

void autonomous() {
if (digitalRead(1) == 0) { // Red front Auton
  punchySet(120); // hit top flag
  delay(1200);
  punchySet(0);
  driveSet(45, -45); // spin to face cap
  delay(800);
  driveSet(45, 45); // drive to cap
  spinnySet(110); // intake ball
  delay(2400);
  driveSet(-45, -45); // back away from cap
  delay(1750);
  driveSet(-45, 45); // turn to second cap
  delay(600);
  spinnySet(-60); // flip cap
  driveSet(45, 45); // drive into second cap
  delay(1450);
  spinnySet(0); // stop spinning intake
  driveSet(-45, -45); // drive away from second cap
  delay(700);
  driveSet(45, -45); //spin to face away from wall
  delay(600);
  driveSet(-45, -45); // back into wall
  delay(1850);
  driveSet(45, 45); // drive away from wall
  delay(330);
  driveSet(-45, 45); // spin to face low flag
  delay(760);
  driveSet(45, 45); // drive into low flag
  delay(2000);
  driveSet(0, 0);

} // end red front auton

else if (digitalRead(2) == 0) { // Blue Front Auton
  punchySet(120); // hit top flag
  delay(1200);
  punchySet(0);
  driveSet(-45, 45); // spin to face cap
  delay(800);
  driveSet(45, 45); // drive to cap
  spinnySet(110); // intake ball
  delay(2400);
  driveSet(-45, -45); // back away from cap
  delay(1750);
  driveSet(45, -45); // turn to second cap
  delay(600);
  spinnySet(-60); // flip cap
  driveSet(45, 45); // drive into second cap
  delay(1450);
  spinnySet(0); // stop spinning intake
  driveSet(-45, -45); // drive away from second cap
  delay(700);
  driveSet(-45, 45); //spin to face away from wall
  delay(600);
  driveSet(-45, -45); // back into wall
  delay(1850);
  driveSet(45, 45); // drive away from wall
  delay(330);
  driveSet(45, -45); // spin to face low flag
  delay(760);
  driveSet(45, 45); // drive into low flag
  delay(2000);
  driveSet(0, 0);

} // end blue front auton

else if (digitalRead(3) == 0) { // red back auton
  driveSet(45, 45); // drive into cap
  spinnySet(-100); // flip cap
  delay(2200);
  driveSet(-45, -45); // drive away from cap
  delay(2100);
  driveSet(-45, 45); // turn to face second cap
  delay(500);
  driveSet(45, 45); // drive into second cap
  spinnySet(110); // flip cap
  delay(2200);
  driveSet(-45, -45); // back away
  delay(330);
  spinnySet(0);
  delay(1550);
  driveSet(0, 0);
}

else { // blue back auton
  driveSet(45, 45); // drive into cap
  spinnySet(-100); // intake ball
  delay(2200);
  driveSet(-45, -45); // drive away from cap
  spinnySet(0);
  delay(2100);
  driveSet(-45, 45); // turn to face second cap
  delay(500);
  driveSet(45, 45); // drive into second cap
  spinnySet(110); // flip cap
  delay(2200);
  driveSet(-45, -45);
  delay(330);
  spinnySet(0);
  delay(1550);
  driveSet(0, 0);
}
} // end auton
/*
  driveReset();
  while (driveGetPos() < 20) { // flip cap
    driveSet(45, 45);
    spinnySet(-60);
    delay(20);
  }
  driveSet(0, 0);
  spinnySet(0);
  driveReset();
  delay(100);

  while (driveGetPos() > -400) { // pull back
    driveSet(-45, -45);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);

  while (driveRightPos() < 200) { // spin to face ball
    driveSet(-45, 45);
    delay(20);
  }
  driveReset();
  driveSet(0, 0);
  delay(100);

  while (driveGetPos() < 350) { // score cap and intake ball
    driveSet(45, 45);
    spinnySet(110);
    delay(20);
  }
  driveSet(0, 0);
  spinnySet(0);
  driveReset();

  while (driveGetPos() < -300) { // pull back
    driveSet(-45, -45);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);

  while (driveRightPos() < 200) { // spin perpendicular to wall
    driveSet(-45, 45);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);

  while (driveGetPos() > -300) { // run into wall
    driveSet(-45, -45);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);

  while (driveGetPos() < 200) { // drive forward
    driveSet(45, 45);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);

  while (driveRightPos() > -200) { // spin and shoot opponent top flag
    driveSet(45, -45);
    punchySet(120);
    delay(20);
  }
  driveSet(0, 0);
  delay(1000);
  driveReset();
  punchySet(0);

  punchySet(100); // shoot high flag
  delay(1500);
  punchySet(0);
  driveReset();

  delay(20);
  while(driveGetPos() < 1000) { //drive toward cap while intaking with roller
    driveSet(45, 45);
    spinnySet(100);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);
  while(driveGetPos() > -500) { // drive back to wall
    driveSet(-45, -45);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);
  while(driveGetPos() < 100) { // drive forward slightly
    driveSet(45, 45);
    delay(20);
  }
  driveSet(0, 0);
  spinnySet(0); // stop intaking ball

  delay(100);
  while(driveLeftPos() > -1000) { // spin to face flags
    driveSet(-45, 45);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);
  while(driveGetPos() < 1000) { // drive forward a tad towards middle flag
    driveSet(45, 45);
    delay(20);
  }
  driveSet(0, 0);
  punchySet(100); // shoot middle flag
  delay(1000);
  punchySet(0);
  driveReset();
  delay(100);
  while(driveGetPos() < 1000) { // drive into low flag
    driveSet(45, 45);
    delay(20);
  }
  driveSet(0, 0);
  // driveReset();
  delay(100);
  driveSet(-45, -45);
  delay(1000);
  driveSet(0, 0);
  */
 // end red front auton
/*
else if (digitalRead(6) == 0) { // Blue Front Auton

} // end blue front auton
*/
/*
else if (digitalRead(7) == 0) { // Red Back Auton
  driveReset();
  punchySet(100); // shoot flag
  delay(1000);
  punchySet(0);
  delay(100);
  while(driveLeftPos() < 1000) { // turn to face cap
    driveSet(45, -45);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);
  while(driveGetPos() < 1000) { // drive into cap and intake ball

  }
} // end red back auton
*/
/*
///////////////////////////////////////////////////////////////////////////////////////////////
////              ?????????????     RED FLAG AUTON        ?????????????                    ////
///////////////////////////////////////////////////////////////////////////////////////////////
else if (digitalRead(12) == 0) {
  driveReset();
  ////////////////////////////////////////////
  while (driveRightPos() > -1040) {            // Hit low flag
    driveSet(-65, -38);
    flipperSet(-100);                          // flipper comes out
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(100);
  ////////////////////////////////////////////
  while (driveRightPos() < 245) {             // drive forward
    driveSet(45, 45);
    delay(20);
  }
driveReset();
  driveSet(0, 0);
  delay(100);
  ////////////////////////////////////////////
  while (driveRightPos() > -57) {            // turn to face higher flag
    driveSet(25, -25);
    delay(20);
  }
  driveReset();
  driveSet(0, 0);
  ////////////////////////////////////////////
  puncherSet(100);                            // puncher  pulls back
  driveReset();
  delay(2500);
  puncherSet(0);                              // puncher releases
  ////////////////////////////////////////////
  while (driveRightPos() < 450) {             // turn to face cap
    driveSet(-45, 45);
  }
  driveReset();
  delay(100);
  ////////////////////////////////////////////
  while (driveRightPos() < 450) {             // drive into cap
    driveSet(35, 35);
    delay(20);
  }
  driveReset();
  driveSet(0, 0);
  delay(400);
  ////////////////////////////////////////////
  liftSet(90);
  flipperSet(110);                            // flip cap
  delay(200);
  flipperSet(120);
  driveSet(30, -30);
  liftSet(0);
  delay(2400);
  liftSet(-40);
  delay(300);
  flipperSet(0);
  liftSet(0);
  driveSet(-45, -45);                         // drive away from cap
  delay(700);
  driveSet(0, 0);
// end RED FLAG AUTON
//
}

///////////////////////////////////////////////////////////////////////////////////////////////
////              ?????????????     BLUE FLAG AUTON        ?????????????                   ////
///////////////////////////////////////////////////////////////////////////////////////////////
else{
driveReset();
////////////////////////////////////////////
while (driveRightPos() > -1040) {            // Hit low flag
  driveSet(-65, -38);
  flipperSet(-100);                          // flipper comes out
  delay(20);
}
driveSet(0, 0);
driveReset();
delay(100);
////////////////////////////////////////////
while (driveRightPos() < 240) {             // drive forward
  driveSet(45, 45);
  delay(20);
}
driveReset();
driveSet(0, 0);
delay(100);
////////////////////////////////////////////          // turn to face higher flag
  driveSet(25, -25);
  delay(215);
driveReset();
driveSet(0, 0);
////////////////////////////////////////////
puncherSet(100);                            // puncher  pulls back
driveReset();
delay(2500);
puncherSet(0);                              // puncher releases
////////////////////////////////////////////
while (driveRightPos() > -350) {             // turn to face cap
  driveSet(45, -45);
}
driveReset();
delay(100);
////////////////////////////////////////////
while (driveRightPos() < 350) {             // drive into cap
  driveSet(35, 35);
  delay(20);
}
driveReset();
driveSet(0, 0);
delay(400);
////////////////////////////////////////////
liftSet(90);
flipperSet(110);                            // flip cap
delay(200);
flipperSet(120);
driveSet(-30, 30);
liftSet(0);
delay(2400);
liftSet(-40);
delay(300);
flipperSet(0);
liftSet(0);
driveSet(-45, -45);                         // drive away from cap
delay(700);
driveSet(0, 0);
// end BLUE FLAG AUTON
}
// end auton
}

///////////////////////////////////////////////////////////////////////////////////////////////
////              ?????????????     RED FAR AUTON        ?????????????                     ////
///////////////////////////////////////////////////////////////////////////////////////////////
// */
/*
driveReset();
driveSet(45, 45);
flipperSet(-100);
delay(200);
flipperSet(100);
delay(800);
flipperSet(0);
delay(1000);                          // flipper comes out
driveSet(0, 0);
driveReset();
delay(100);
////////////////////////////////////////////
flipperSet(-127);
liftSet(90);
driveSet(-30, 30);
delay(400);
liftSet(0);
delay(1100);
flipperSet(0);
liftSet(0);
driveSet(-45, -45);                         // drive away from cap
delay(700);
driveSet(0, 0);


///////////////////////////////////////////////////////////////////////////////////////////////
////              ?????????????     BLUE FAR AUTON        ?????????????                    ////
///////////////////////////////////////////////////////////////////////////////////////////////

}  // end auton

*/
// end
  /*
  ////////////////////////////////////////////////////////////////////////////////////////////////
  ////              ?????????????     RIGHT MIDDLE AUTON        ?????????????             ////
  ////////////////////////////////////////////////////////////////////////////////////////////////
  if(digitalRead(JUMPER_5) == 0) {
      delay(20);
    rackSet(127);                               // Rack out
      delay(1350);
    rackSet(0);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 800) {         //Lift up
      liftSet(80);
      delay(20);
    }
    liftSet(0);
    driveReset();
    ////////////////////////////////////////////
    while(driveGetPos() < 200) {                //Drive forward
      driveSet(45, 45);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) < 1245){
      liftSet(-40);
      // rackSet(127);
      delay(20);
    }
    driveReset();
    delay(200);
    ////////////////////////////////////////////
    while(driveGetPos() < 200) {
      liftSet(-45);
      driveSet(35, 35);
      delay(20);
    }
    driveSet(0, 0);
    liftSet(0);
    delay(300);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 905){         //Lift up to clear stationary goals
      liftSet(127);
      delay(20);
    }
    liftSet(0);
    driveSet(-80, 0);
    delay(1100);
    driveSet(-60, -45);
    delay(1000);
    driveSet(0, 0);
    driveReset();
  } // end right middle auton
  ////////////////////////////////////////////////////////////////////////////////////////////////
  ////              ?????????????     LEFT MIDDLE AUTON        ?????????????              ////
  ////////////////////////////////////////////////////////////////////////////////////////////////
  else if(digitalRead(JUMPER_6) == 0) {
      delay(20);
    rackSet(127);                               // Rack out
      delay(1350);
    rackSet(0);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 800) {         //Lift up
      liftSet(80);
      delay(20);
    }
    liftSet(0);
    driveReset();
    ////////////////////////////////////////////
    while(driveGetPos() < 200) {                //Drive forward
      driveSet(45, 45);
      delay(20);
    }
    driveSet(0, 0);
    driveReset();
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) < 1245){
      liftSet(-40);
      // rackSet(127);
      delay(20);
    }
    driveReset();
    delay(200);
    ////////////////////////////////////////////
    while(driveGetPos() < 200) {
      liftSet(-45);
      driveSet(35, 35);
      delay(20);
    }
    driveSet(0, 0);
    liftSet(0);
    delay(300);
    ////////////////////////////////////////////
    while(analogRead(LIFT_POT) > 905){         //Lift up to clear stationary goals
      liftSet(127);
      delay(20);
    }
    liftSet(0);
    driveSet(0, -80);
    delay(1100);
    driveSet(-45, -60);
    delay(1000);
    driveSet(0, 0);
    driveReset();
  } // end right middle auton
////////////////////////////////////////////////////////////////////////////////////////////////
////            ?????????????           LEFT-BLUE 5-pt AUTON           ?????????????             ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_7) == 0) {
  driveReset();
  rackSet(127);
  delay(600);                                 // Finish rack out
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300) {        // Lift up to clear mogo intake
    liftSet(127);
    rackSet(-127);                            // Rack back in
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1025) {        // Mogo intake out
    mogoSet(-90);
    driveSet(80, 80);                         // Start driving forward
    delay(20);
  }
  mogoSet(0);
  rackSet(0);                                 // Stop rack
  ////////////////////////////////////////////
  while(driveGetPos() < 1240) {               // Drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 450) {         // Intake mogo
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1430) {        // Drop arm
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -320) {               // Return to scoring zone
    driveSet(-80, -80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() < 340) {                // Spin to face 5-pt zone
    driveSet(45, -45);
    delay(20);
  }
  driveSet(0, 0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1990) {        // Claw off cone
  rackSet(127);
  liftSet(-90);
  }
  liftSet(0);
  delay(600);                                 // Rack out to not knock cone back off
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1200){          // Lift up away from mogo
    liftSet(90);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  mogoSet(-90);
  delay(500);
  mogoSet(0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() > -300){                 // Back away from mogo
    driveSet(-45, -45);                        // so it is scored
    delay(20);
  }
  driveSet(0, 0);
} // end right 5-pt auton
////////////////////////////////////////////////////////////////////////////////////////////////
////            ?????????????           RIGHT-BLUE 5-pt AUTON           ?????????????            ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_8) == 0) {
  driveReset();
  rackSet(127);
  delay(600);                                 // Finish rack out
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300) {        // Lift up to clear mogo intake
    liftSet(127);
    rackSet(-127);                            // Rack back in
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1025) {        // Mogo intake out
    mogoSet(-90);
    driveSet(80, 80);                         // Start driving forward
    delay(20);
  }
  mogoSet(0);
  rackSet(0);                                 // Stop rack
  ////////////////////////////////////////////
  while(driveGetPos() < 1385) {               // Drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 450) {         // Intake mogo
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1430) {        // Drop arm
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -320) {               // Return to scoring zone
    driveSet(-80, -80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() < 125) {                // Spin to face 5-pt zone
    driveSet(45, -45);
    delay(20);
  }
  driveSet(0, 0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1990) {        // Claw off cone
  rackSet(127);
  liftSet(-90);
  }
  liftSet(0);
  delay(600);                                 // Rack out to not knock cone back off
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1200){          // Lift up away from mogo
    liftSet(90);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  mogoSet(-90);
  delay(500);
  mogoSet(0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() > -300){                 // Back away from mogo
    driveSet(-45, -45);                        // so it is scored
    delay(20);
  }
  driveSet(0, 0);
} // end right 5-pt auton
////////////////////////////////////////////////////////////////////////////////////////////////
////            ?????????????           LEFT-RED 5-pt AUTON           ?????????????             ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_9) == 0) {
  driveReset();
  rackSet(127);
  delay(600);                                 // Finish rack out
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300) {        // Lift up to clear mogo intake
    liftSet(127);
    rackSet(-127);                            // Rack back in
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1025) {        // Mogo intake out
    mogoSet(-90);
    driveSet(80, 80);                         // Start driving forward
    delay(20);
  }
  mogoSet(0);
  rackSet(0);                                 // Stop rack
  ////////////////////////////////////////////
  while(driveGetPos() < 1385) {               // Drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 450) {         // Intake mogo
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1430) {        // Drop arm
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -320) {               // Return to scoring zone
    driveSet(-80, -80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() < 420) {                // Spin to face 5-pt zone
    driveSet(45, -45);
    delay(20);
  }
  driveSet(0, 0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1990) {        // Claw off cone
  rackSet(127);
  liftSet(-90);
  }
  liftSet(0);
  delay(600);                                 // Rack out to not knock cone back off
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1200){          // Lift up away from mogo
    liftSet(90);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  mogoSet(-90);
  delay(500);
  mogoSet(0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() > -300){                 // Back away from mogo
    driveSet(-45, -45);                        // so it is scored
    delay(20);
  }
  driveSet(0, 0);
} // end right 5-pt auton
////////////////////////////////////////////////////////////////////////////////////////////////
////            ?????????????           RIGHT-RED 5-pt AUTON           ?????????????            ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_10) == 0) {
  driveReset();
  rackSet(127);
  delay(600);                                 // Finish rack out
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300) {        // Lift up to clear mogo intake
    liftSet(127);
    rackSet(-127);                            // Rack back in
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1025) {        // Mogo intake out
    mogoSet(-90);
    driveSet(80, 80);                         // Start driving forward
    delay(20);
  }
  mogoSet(0);
  rackSet(0);                                 // Stop rack
  ////////////////////////////////////////////
  while(driveGetPos() < 1340) {               // Drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 450) {         // Intake mogo
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1430) {        // Drop arm
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -320) {               // Return to scoring zone
    driveSet(-80, -80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() < 210) {                // Spin to face 5-pt zone
    driveSet(45, -45);
    delay(20);
  }
  driveSet(0, 0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1990) {        // Claw off cone
  rackSet(127);
  liftSet(-90);
  }
  liftSet(0);
  delay(600);                                 // Rack out to not knock cone back off
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1200){          // Lift up away from mogo
    liftSet(90);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  mogoSet(-90);
  delay(500);
  mogoSet(0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() > -300){                 // Back away from mogo
    driveSet(-45, -45);                        // so it is scored
    delay(20);
  }
  driveSet(0, 0);
} // end right 5-pt auton
////////////////////////////////////////////////////////////////////////////////////////////////
////          ?????????????           LEFT-RED 10-pt AUTON           ?????????????          ////
////////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_11) == 0) {
  driveReset();
  rackSet(127);
  delay(600);                                 // Finish rack out
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300) {        // Lift up to clear mogo intake
    liftSet(127);
    rackSet(-127);                            // Rack back in
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1025) {        // Mogo intake out
    mogoSet(-90);
    driveSet(80, 80);                         // Start driving forward
    delay(20);
  }
  mogoSet(0);
  rackSet(0);                                 // Stop rack
  ////////////////////////////////////////////
  while(driveGetPos() < 1385) {               // Drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 450) {         // Intake mogo
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1430) {        // Drop arm
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -700) {               // Return to scoring zone
    driveSet(-80, -80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() < 420) {                // Spin to face 5-pt zone
    driveSet(45, -45);
    delay(20);
  }
  driveSet(0, 0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1990) {        // Claw off cone
  rackSet(127);
  liftSet(-90);
  }
  liftSet(0);
  delay(600);                                 // Rack out to not knock cone back off
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1200){          // Lift up away from mogo
    liftSet(90);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() < 300){
    driveSet(45, 45);
    delay(20);
  }
  driveSet(0, 0);
  ////////////////////////////////////////////
  mogoSet(-90);
  delay(500);
  mogoSet(0);
  driveReset();
  ////////////////////////////////////////////
  driveSet(-45, -45);
  delay(600);
  driveSet(0, 0);
  } // end left 10-pt auton
///////////////////////////////////////////////////////////////////////////////////////////////
////        ?????????????           RIGHT-BLUE 10-pt AUTON           ?????????????         ////
///////////////////////////////////////////////////////////////////////////////////////////////
else if(digitalRead(JUMPER_12) == 0) {
  driveReset();
  rackSet(127);
  delay(600);                                 // Finish rack out
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1300) {        // Lift up to clear mogo intake
    liftSet(127);
    rackSet(-127);                            // Rack back in
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) < 1025) {        // Mogo intake out
    mogoSet(-90);
    driveSet(80, 80);                         // Start driving forward
    delay(20);
  }
  mogoSet(0);
  rackSet(0);                                 // Stop rack
  ////////////////////////////////////////////
  while(driveGetPos() < 1385) {               // Drive into mogo
    driveSet(80, 80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  delay(200);
  ////////////////////////////////////////////
  while(analogRead(MOGO_POT) > 450) {         // Intake mogo
    mogoSet(127);
    delay(20);
  }
  mogoSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1430) {        // Drop arm
    liftSet(-100);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() > -700) {               // Return to scoring zone
    driveSet(-80, -80);
    delay(20);
  }
  driveSet(0, 0);
  driveReset();
  ////////////////////////////////////////////
  while(driveGetPos() < 110) {                // Spin to face 5-pt zone
    driveSet(45, -45);
    delay(20);
  }
  driveSet(0, 0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) < 1990) {        // Claw off cone
  rackSet(127);
  liftSet(-90);
  }
  liftSet(0);
  delay(600);                                 // Rack out to not knock cone back off
  rackSet(0);
  ////////////////////////////////////////////
  while(analogRead(LIFT_POT) > 1200){          // Lift up away from mogo
    liftSet(90);
    delay(20);
  }
  liftSet(0);
  ////////////////////////////////////////////
  while(driveGetPos() < 300){
    driveSet(45, 45);
    delay(20);
  }
  driveSet(0, 0);
  ////////////////////////////////////////////
  mogoSet(-90);
  delay(500);
  mogoSet(0);
  ////////////////////////////////////////////
  driveSet(-45, -45);
  delay(600);
  driveSet(0, 0);
  driveReset();

} // end right 10-pt auton
} // end autonomous
*/

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
