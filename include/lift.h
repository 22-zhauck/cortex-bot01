#ifndef _LIFT_H_
#define _LIFT_H_

//#define LIFT_LEFT_M 6
//#define LIFT_RIGHT_M 7

// lift PID tuning varibales
float  pid_Kp = 2.0;
float  pid_Ki = 0.04;
float  pid_Kd = 0.0;

static int   pidRunning = 1;
static float pidRequestedValue;

#define PID_LIFT_MAX       127
#define PID_LIFT_MIN     (-127)
#define PID_SENSOR_SCALE    1
#define PID_INTEGRAL_LIMIT  50

// Sets the speeds of the left and right wheels of the chassis
void liftMove(int speed);

#endif // _LIFT_H_
