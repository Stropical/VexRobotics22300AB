#include "main.h"
#include "autonomous.hpp"

//142" for the arena
//5.5" for block
//23.5" for square

//5.875

#define CORNER_SPEED 1000


#define MOTOR_FOR 120
#define MOTOR_SLOW 60
#define MOTOR_BAC -120
#define MOTOR_OFF 0
#define TRAY_SPEED 50



void auto_stack(int speed) {
  set_rollers(MOTOR_OFF); //Set Rollers off
  set_tray(MOTOR_SLOW);
  pros::delay(2000);
  set_rollers(MOTOR_SLOW);
  set_tank(MOTOR_SLOW*-1, MOTOR_SLOW*-1);
  pros::delay(1000);
  set_tank(MOTOR_OFF, MOTOR_OFF);
}

void auto_move(int time, bool direction, int speed) {
  if (direction) {
    set_tank(speed, speed); //Forward and off
    pros::delay(time);
    set_tank(MOTOR_OFF, MOTOR_OFF);
  } else {
    set_tank(speed*-1, speed*-1); //Backward and Off
    pros::delay(time);
    set_tank(MOTOR_OFF, MOTOR_OFF);
  }
}

void auto_turn(bool direction) {
  if(direction) {
    set_tank(MOTOR_FOR *0.5, MOTOR_BAC *0.5); //Turn 90
    pros::delay(CORNER_SPEED);
    set_tank(MOTOR_OFF, MOTOR_OFF);
    pros::delay(100);
  } else {
    set_tank(MOTOR_BAC *0.5, MOTOR_FOR *0.5); //Turn 90
    pros::delay(CORNER_SPEED);
    set_tank(MOTOR_OFF, MOTOR_OFF);
    pros::delay(100);
  }

  set_tank(MOTOR_OFF, MOTOR_OFF);
  pros::delay(100);


}

void rollers (bool input) {
  if (input) {
    set_rollers(127 * -1); //Set Rollers on
    pros::delay(600);
  } else {
    set_rollers(0); //Set Rollers off
    pros::delay(600);
  }
}

void autonomous() {

  //Auton Setup (Tray and Rollers)
    set_tank(MOTOR_FOR, MOTOR_FOR); //Forward and off
    pros::delay(200);
    set_tank(MOTOR_OFF, MOTOR_OFF);

    set_tank(MOTOR_BAC, MOTOR_BAC); //Backward and Off
    pros::delay(200);
    set_tank(MOTOR_OFF, MOTOR_OFF);

    set_rollers(MOTOR_BAC);





  //4 Block Collect
    //set_tank(MOTOR_SLOW, MOTOR_SLOW); //Slowly move forward
    //pros::delay(2700);
    //set_tank(MOTOR_OFF, MOTOR_OFF);
    //pros::delay(100);

    auto_move(3200, true, MOTOR_SLOW);

 //Back
    //set_tank(MOTOR_SLOW *-1, MOTOR_SLOW *-1); //Slowly move backward
    //pros::delay(2700);
    //set_tank(MOTOR_OFF, MOTOR_OFF);
    //pros::delay(100);
    auto_move(2500, true, MOTOR_SLOW * -1);

    //set_tank(MOTOR_FOR, MOTOR_BAC); //Turn 90
    //pros::delay(CORNER_SPEED);
    //set_tank(MOTOR_OFF, MOTOR_OFF);
    //pros::delay(100);

    auto_turn(false);

    //set_tank(MOTOR_SLOW, MOTOR_SLOW); //Slowly move forward
    //pros::delay(1200);
    //set_tank(MOTOR_OFF, MOTOR_OFF);
    //pros::delay(100);

    auto_move(1800, false, MOTOR_SLOW * -1);

    set_rollers(MOTOR_BAC); //Backward and Off
    pros::delay(200);
    set_rollers(MOTOR_OFF);

    auto_stack(MOTOR_SLOW);

}


/* (8 LV_CURSOR_BLOCK)
 //Transition
    set_tank(MOTOR_BAC, MOTOR_FOR); //Turn 90
    pros::delay(CORNER_SPEED);
    set_tank(MOTOR_OFF, MOTOR_OFF);
    pros::delay(100);

    set_tank(MOTOR_SLOW, MOTOR_SLOW); //Short move forward
    pros::delay(800);
    set_tank(MOTOR_OFF, MOTOR_OFF);
    pros::delay(100);

    set_tank(MOTOR_BAC, MOTOR_FOR); //Turn 90
    pros::delay(CORNER_SPEED);
    set_tank(MOTOR_OFF, MOTOR_OFF);
    pros::delay(100);

  //3-4 Block Collect
    set_tank(MOTOR_SLOW, MOTOR_SLOW); //Medium move
    pros::delay(1900);
    set_tank(MOTOR_OFF, MOTOR_OFF);
    pros::delay(100);

  //Transition
    set_tank(MOTOR_BAC, MOTOR_FOR); //Turn 90
    pros::delay(CORNER_SPEED);
    set_tank(MOTOR_OFF, MOTOR_OFF);
    pros::delay(100);

    set_tank(MOTOR_SLOW, MOTOR_SLOW); //Medium move forward (Back to base)
    pros::delay(1850);
    set_tank(MOTOR_OFF, MOTOR_OFF);
    pros::delay(100);
    */
 //Stack
