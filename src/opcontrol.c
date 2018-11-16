#include "main.h"

 static int clamp(int in) {return (abs(in) > 15) ? in : 0; }

 void operatorControl() {

  // int rack;
  // int lift;
  int power;
  int turn;
  int lift;
  int flip;
  int spin;
  int punch;
  int index;
  bool indexing = !digitalRead(12);
  bool spinUp = !digitalRead(12);
  bool spinDown = !digitalRead(12);
  // bool flipping = !digitalRead(12);
  // bool flyHigh = !digitalRead(12);
  // bool flyLow = !digitalRead(12);
  // bool fly = digitalRead(12);
  // int rack;
  // int claw;
  // int mogo;
  // bool halfButtonPress = false;
	//bool thirdButtonPress = false;

     while (1) {

////////////////////////////////////////////////////////////////////////////////
/////                       SENSOR VALUES                                  /////
////////////////////////////////////////////////////////////////////////////////
        // printf("lift %d", analogRead(LIFT_POT));

        // printf("flip %d", analogRead(FLIP_POT));

        // printf("drive %d", driveGetPos());

        // printf("left %d", driveLeftPos());

        // printf("auton %d", digitalRead(5));

        // printf("pot %d", analogRead(2));

        // printf("drive %d", encoderGet(rightEncoder));

////////////////////////////////////////////////////////////////////////////////
/////                       DRIVE CONTROLS                                 /////
////////////////////////////////////////////////////////////////////////////////
         power = clamp(joystickGetAnalog(1, 3)); // vertical axis on left joystick
         turn  = clamp(joystickGetAnalog(1, 4)); // horizontal axis on left joystick

				 if (turn > 64)  //Max turn value is 60
				 	turn = 64;
				 else if (turn < -64)
				 	turn = -64;
/*
				 if (buttonIsNewPress(JOY1_7R))
					halfButtonPress = !halfButtonPress;

				 if (halfButtonPress)
				 {
				 	power = power / 2;
					turn = turn / 2;
				 }
*/
/*
				 if (buttonIsNewPress (JOY1_8L))
				 	 thirdButtonPress = !thirdButtonPress;

				 if (thirdButtonPress)
				 {
					 power = power / 3.3;
					 turn = turn / 3.3;
				 }
*/
			   driveSet(power + turn, power - turn);
////////////////////////////////////////////////////////////////////////////////
/////                       LIFT CONTROLS                                  /////
////////////////////////////////////////////////////////////////////////////////
if (buttonGetState(JOY1_6U)) {
  lift = 95;
}
else if (buttonGetState(JOY1_6D)) {
  lift = -80;
}
else {
  lift = 0;
}
liftSet(lift);
////////////////////////////////////////////////////////////////////////////////
/////                       FLIPPER CONTROLS                               /////
////////////////////////////////////////////////////////////////////////////////

if (buttonGetState(JOY1_8R)) {
  flip = 110;
}
else if(buttonGetState(JOY1_8L)) {
  flip = -110;
}
else{
  flip =0;
}
/*
if (buttonIsNewPress(JOY1_8R)) {
  flipping = !flipping;
}
if (flipping) {
  if (analogRead(FLIP_POT) > 550) {
    flip = -100;
  }
  else{
    flip = 0;
  }
}
else{
  if (analogRead(FLIP_POT) > 3800) {
    flip = 100;
  }
  else{
    flip = 0;
  }
}
*/
flipperSet(flip);
////////////////////////////////////////////////////////////////////////////////
/////                       SPINNER CONTROLS                               /////
////////////////////////////////////////////////////////////////////////////////
if (buttonIsNewPress(JOY1_8U)) {
  spinUp = !spinUp;
  spinDown = 0;
}
if (buttonIsNewPress(JOY1_8D)) {
  spinDown = !spinDown;
  spinUp = 0;
}
if (spinUp) {
  spin = 100;
}
else if (spinDown) {
  spin = -100;
}
else {
  spin = 0;
}
spinnerSet(spin);
////////////////////////////////////////////////////////////////////////////////
/////                        PUNCHER CONTROLS                              /////
////////////////////////////////////////////////////////////////////////////////
if (buttonGetState(JOY1_5U)) {
  punch = 100;
}
else {
  punch = 0;
}
puncherSet(punch);
////////////////////////////////////////////////////////////////////////////////
/////                        INDEXER CONTROLS                              /////
////////////////////////////////////////////////////////////////////////////////
if (buttonIsNewPress(JOY1_5D)) {
  indexing = !indexing;
}
if (indexing) {
  index = 127;
}
else if (buttonGetState(JOY1_7D)) {
  index = -100;
}
else{
  index = 0;
}
indexerSet(index);
////////////////////////////////////////////////////////////////////////////////
/////                       LAST YEAR STUFF                                /////
////////////////////////////////////////////////////////////////////////////////
/*
				 //Mobile Goal Intake Pneumatic Controls
				 if (buttonIsNewPress(JOY1_7D))
				 {
					bool down = digitalRead(1);
					down = !down;
					mobilegoal(down);
				 }
*/
/*
         // Mobile Goal Controls
         if (buttonGetState(JOY1_8U)) {       //Button 8U for Up Mogo
           mogo = 127;
         }
         else if(buttonGetState(JOY1_8D)) {   //Button 8D for Out Mogo
           mogo = -90;
         }
         else if(buttonGetState(JOY1_8L)) {   //Button 8L for slower mogo up
           mogo = 90;
         }
         else {
           mogo = 0;
         }
         mogoSet(mogo);

         // Lift Stuff
         if (buttonGetState(JOY1_6U)) {        //Button 8U for Up Lift
           lift = 80;
         }
         else if(buttonGetState(JOY1_6D)) {   //Button 8D for Down Lift
           lift = -100;
         }
         else {
           lift = 0;
         }
         liftSet(lift);

				 // Rack and Pinion Controls
         if (buttonGetState(JOY1_5U)) {        //Button 8U for In Rack
           rack = 127;
         }
         else if(buttonGetState(JOY1_5D)) {   //Button 8D for Out Rack
           rack = -127;
         }
         else {
           rack = 0;
         }
         rackSet(rack);

         // Claw Controls
          if (buttonGetState(JOY1_8U)) {        //Button 8U for Open Claw
            claw = 127;
          }
          else if(buttonGetState(JOY1_8D)) {   //Button 8D for Close claw
            claw = -80;
          }
          else {
            claw = 0;     //Claw =0
          }
          clawSet(claw);
*/
/*
          if (buttonGetState(JOY1_8L)) {
            while(LIFT_POT < 1999) {
              liftSet(-90);
              delay(20);
            }
          }
          else if (buttonGetState(JOY1_8R)) {
            while(LIFT_POT < 1999) {
              liftSet(-90);
              delay(20);
            }
          }
*/
         delay(20);
     }

}
