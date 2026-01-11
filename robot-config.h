using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern motor leftfrontmotor;
extern motor leftbackmotor;
extern motor leftmidmotor;
extern motor rightfrontmotor;
extern motor rightbackmotor;
extern motor rightmidmotor;
extern motor frontrollers;
extern motor backrollers;
extern digital_out pneum;
extern digital_out toungue;
extern inertial inert;
extern controller control;

void  vexcodeInit( void );