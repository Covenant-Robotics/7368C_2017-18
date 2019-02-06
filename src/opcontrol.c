#include "main.h"

 static int clamp(int in) {return (abs(in) > 20) ? in : 0; }

 void operatorControl() {

  // int rack;
  // int lift;
  int speed;
  int twist;
  // int lift;
  // int flip;
  // int angle;
  int spin;
  int punch;
  // int index;
  // bool indexing = !digitalRead(12);
  // bool rollUp = !digitalRead(5);
  // bool rollDown = !digitalRead(5);
  // bool spinUp = !digitalRead(5);
  // bool spinDown = !digitalRead(5);
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

        printf("drive %d", driveGetPos());

        // printf("left %d", driveLeftPos());

        // printf("auton %d", digitalRead(5));

        // printf("pot %d", analogRead(2));

        // printf("drive %d", encoderGet(rightEncoder));

////////////////////////////////////////////////////////////////////////////////
/////                       DRIVE CONTROLS                                 /////
////////////////////////////////////////////////////////////////////////////////
         speed = clamp(joystickGetAnalog(1, 3)); // vertical axis on left joystick
         twist  = clamp(joystickGetAnalog(1, 4)); // horizontal axis on left joystick
/*
				if (twist > 85) {  //Max turn value is 70
				 	twist = 85;
        }
				else if (twist < -85) {
         	twist = -85;
        }
*/
/*
        if (power > 100) {
          power  = 100;
        }
        else if (power < -100) {
          power = -100;
        }
*/
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
			   driveSet(speed + twist, speed - twist);

////////////////////////////////////////////////////////////////////////////////
/////                       SPINNER CONTROLS                               /////
////////////////////////////////////////////////////////////////////////////////
if (buttonGetState(JOY1_8U)) { // intake
  spin = 110;
}
else if (buttonGetState(JOY1_8D)) { // outtake
  spin = -100;
}
else if (buttonGetState(JOY1_6U)) { // cap flipping speed
  spin = -60;
}
else if (buttonGetState(JOY1_6D)) { // cap flip
  spin = -60;
}
else {
  spin = 0;
}
spinnySet(spin);
////////////////////////////////////////////////////////////////////////////////
/////                        PUNCHER CONTROLS                              /////
////////////////////////////////////////////////////////////////////////////////
if (buttonGetState(JOY1_5U)) {
  punch = 120;
}
else {
  punch = 0;
}
punchySet(punch);
/*
////////////////////////////////////////////////////////////////////////////////
/////                        ANGLER CONTROLS                              /////
////////////////////////////////////////////////////////////////////////////////
if (buttonGetState(JOY1_6U)) {
  angle = 100;
}
else if (buttonGetState(JOY1_6D)) {
  angle = -100;
}
else{
  angle = 0;
}
angleSet(angle);
*/
////////////////////////////////////////////////////////////////////////////////
/////                           OLD STUFF                                  /////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
/////                       FLIPPER CONTROLS                               /////
////////////////////////////////////////////////////////////////////////////////
/*
if (buttonGetState(JOY1_8R)) {
  flip = 110;
}
else if(buttonGetState(JOY1_8L)) {
  flip = -110;
}
else{
  flip =0;
}
*/
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
// flipperSet(flip);

////////////////////////////////////////////////////////////////////////////////
/////                       LIFT CONTROLS                                  /////
////////////////////////////////////////////////////////////////////////////////
/*
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
*/
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
