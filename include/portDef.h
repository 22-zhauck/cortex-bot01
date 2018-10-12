// Create all the port defintions in one place for easy trouble shooting
#include "API.h"

// ---------- Motor Port Assignments -----------------------------------
#define LM_F_DRIVE 2
#define LM_B_DRIVE 3
#define RM_F_DRIVE 4
#define RM_B_DRIVE 5
#define LIFT_LEFT_M 6
#define LIFT_RIGHT_M 7
#define CLAW_M 8

// ----------- Digital Ports ------------------------------------------
#define QUAD_TOP_LM_PORT 6
#define QUAD_BOTTOM_LM_PORT 7
#define QUAD_TOP_RM_PORT 4
#define QUAD_BOTTOM_RM_PORT 5


// Setup Encoder and other device instances
Encoder encoderLM;
Encoder encoderRM;
