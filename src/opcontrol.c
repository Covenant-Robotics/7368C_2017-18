#include "main.h"

 static int clamp(int in) {return (abs(in) > 15) ? in : 0; }

 void operatorControl() {

  // int rack;
  // int lift;
	int power;
  int turn;
  int lift;
  int rack;
  int claw;
  int mogo;
  /*
  bool halfButtonPress = false;
	bool quarterButtonPress = false;
  */
     while (1) {

         power = clamp(joystickGetAnalog(1, 3)); // vertical axis on left joystick
         turn  = clamp(joystickGetAnalog(1, 4)); // horizontal axis on left joystick

				 if (turn > 60)  //Max turn value is 60
				 	turn = 60;
				 else if (turn < -60)
				 	turn = -60;

          /*
				   if (buttonIsNewPress(JOY1_8R))
					 halfButtonPress = !halfButtonPress;

				 if (halfButtonPress)
				 {
				 	power = power / 2;
					turn = turn / 2;
				 }

				 if (buttonIsNewPress (JOY1_8L))
				 	 quarterButtonPress = !quarterButtonPress;

				 if (quarterButtonPress)
				 {
					 power = power / 3.3;
					 turn = turn / 3.3;
				 }
         */
			   driveSet(power + turn, power - turn);

/*
				 //Mobile Goal Intake Pneumatic Controls
				 if (buttonIsNewPress(JOY1_7D))
				 {
					bool down = digitalRead(1);
					down = !down;
					mobilegoal(down);
				 }
*/

         // Mobile Goal Controls
         if (buttonGetState(JOY1_7U)) {
           mogo = 127;
         }
         else if(buttonGetState(JOY1_7D)) {   //Button 8D for Out Rack
           mogo = -127;
         }
         else {
           mogo = 0;
         }
         goalSet(mogo);

         // Lift Stuff
         if (buttonGetState(JOY1_6U)) {        //Button 8U for In Rack
           lift = 127;
         }
         else if(buttonGetState(JOY1_6D)) {   //Button 8D for Out Rack
           lift = -127;
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
            claw = 100;
          }
          else if(buttonGetState(JOY1_8D)) {   //Button 8D for Close claw
            claw = -127;
          }
          else {
            claw = 0;     //Claw =0
          }
          clawSet(claw);

         delay(20);
     }

}
