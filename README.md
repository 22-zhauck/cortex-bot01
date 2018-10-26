# cortex-bot01

This is a sample project showing the breaking up of the code by subsystem on your robot.  The project has three destinct subsystesm defiend each with their own cod sesction, these being:

  1 - chassis -- drive base chassis.h contains definitions, chassis.c contains all drivebase specific code
  2 - lift    -- lift system has lift.h for definitions, lift.c for all lift specific functions
  3 - claw    -- claw system (manipulator) claw.h contains defintions and claw.c all subsequent ucntions
  
The lift.c and paired lift.h inlcude a function to use PID control on a lift, usign a task.  This is sampel code use at your own risk and will require modificatiosn to meet your robots setup and needs!
