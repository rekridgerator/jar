#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor leftfrontmotor = motor(PORT4, ratio18_1, true);
motor leftbackmotor = motor(PORT11, ratio18_1, true);
motor leftmidmotor = motor(PORT3, ratio18_1, true);
motor rightfrontmotor = motor(PORT8, ratio18_1, false);
motor rightbackmotor = motor(PORT20, ratio18_1, false);
motor rightmidmotor = motor(PORT9, ratio18_1, false);
motor frontrollers = motor(PORT21, ratio18_1, false);
motor backrollers = motor(PORT18, ratio18_1, true);
digital_out pneum = digital_out(Brain.ThreeWirePort.A);
digital_out toungue = digital_out(Brain.ThreeWirePort.B);
inertial inert = inertial(PORT15);
controller control = controller();

void vexcodeInit( void ) {
  // nothing to initialize
}