#include "robot_config.h"

void op_comp(){
  while(1){
    leftDrive.move(joystick.get_analog(E_CONTROLLER_ANALOG_LEFT_Y));
    rightDrive.move(joystick.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y));
    delay(2);
    }
}
