#include "robot_config.h"
using namespace okapi;

std::shared_ptr<OdomChassisController> chassis =
ChassisControllerBuilder()
    .withMotors({-1,-2,-3},{4,5,6})
    // green gearset, 4 inch wheel diameter, 12.2 inch wheel track
    .withDimensions(AbstractMotor::gearset::green, {{4_in, 12.2_in}, imev5GreenTPR})
    .withSensors(
      //ADJUST THIS!!!!
        okapi::ADIEncoder{'A', 'B'}, // left encoder in ADI ports A & B
        okapi::ADIEncoder{'C', 'D', true},  // right encoder in ADI ports C & D (reversed)
        okapi::ADIEncoder{'E', 'F'}  // middle encoder in ADI ports E & F
    )
    //...AND THIS!!
    // specify the tracking wheels diameter (2.75 in), track (7 in), and TPR (360)
    // specify the middle encoder distance (1 in) and diameter (2.75 in)
    .withOdometry({{2.75_in, 7_in, 1_in, 2.75_in}, quadEncoderTPR})
    .buildOdometry();

void auton_comp(){
  chassis->setState({0_in, 0_in, 0_deg});

}
