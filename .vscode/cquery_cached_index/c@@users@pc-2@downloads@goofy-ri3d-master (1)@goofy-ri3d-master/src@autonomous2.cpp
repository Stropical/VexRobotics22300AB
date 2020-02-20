#include "main.h"


//142" for the arena
//5.5" for block
//23.5" for square

//5.875

#define CORNER_ANGLE 90
#define MUTF 100 //Cubes units to inches
#define MOTOR_ON 120
#define MOTOR_OFF 0
#define TRAY_SPEED 50

void autonomous() {
  //Move Forward and Suck
  set_tank(MOTOR_ON, MOTOR_ON);
  set_rollers(MOTOR_ON);
  pros::delay(MUTF * 6);
  set_tank(MOTOR_OFF, MOTOR_OFF);
  //Turn 90
  set_tank(MUTF * -1, MUTF);
  pros::delay(CORNER_ANGLE);
  set_tank(0, 0);
  //Move Forward a little
  set_tank(MOTOR_ON, MOTOR_ON);
  pros::delay(MUTF);
  //Turn 90
  set_tank(MUTF * -1, MUTF);
  pros::delay(CORNER_ANGLE);
  set_tank(0, 0);
  //Move Back to Base
  set_tank(MOTOR_ON, MOTOR_ON);
  pros::delay(MUTF * 5);
  //Place Blocks
  set_rollers(MOTOR_OFF);
  set_tray(TRAY_SPEED);
}
