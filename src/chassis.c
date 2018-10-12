#include "main.h"    // includes API.h and other headers
#include "chassis.h" // redundant, but ensures that the corresponding header file (chassis.h) is included
#include "portDef.h" // All port defintions o nthe cortex

void chassisSet(int left, int right) {
  motorSet(LM_F_DRIVE, left);
  motorSet(RM_F_DRIVE, -right);
  motorSet(LM_B_DRIVE, left);
  motorSet(RM_B_DRIVE, -right);
}

void pivotTurn(int direction, int speed, int angle, bool gyro) {
  // direction -- 1 = left turn, 0 = right pivotTurn
  // speed -- -127 -- 127
  // angle -- desired turn angle in degrees
  // gyro -- 0 = no gyro used, 1 = use gyro for turn.
  // Assumes a quadriatic encoder - 360 tics = 360 degrees

  // pivotTurn - turn radius is 1/2 * dimaeter of wheel base
  float turnCircum = WHEEL_BASE * 3.14;
  float wheelCircum = WHEEL_DIAMETER * 3.14;

  float motorDegree = (((angle/360) * turnCircum) / wheelCircum) * 360;

  if(direction == 1) {
    //Left turn
    // we need todo a while loop and count until we get to motorDegree
    // on quadriatic encoders
    encoderReset(encoderLM);

    while(encoderGet(encoderLM) <= motorDegree) {
      motorSet(LM_F_DRIVE, speed);
      motorSet(RM_F_DRIVE, speed);
      motorSet(LM_B_DRIVE, speed);
      motorSet(RM_B_DRIVE, speed);
      wait(20);
    }
  }
}
