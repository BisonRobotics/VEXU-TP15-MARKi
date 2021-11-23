#include "robot_config.h"

void op_comp(){
  while(1){
    int left = joystick.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
    int right = joystick.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
    tankDrive(left, right);

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_R1)){
      armLeft = 127;
      armRight = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_R2)){
      armLeft = -127;
      armRight = -127;
    }else{
      armLeft = 0;
      armRight = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_L1)){
      tiltLeft = 127;
      tiltRight = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_L2)){
      tiltLeft = -127;
      tiltRight = -127;
    }else{
      tiltLeft = 0;
      tiltRight = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_UP)){
      claw = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_DOWN)){
      claw = -127;
    }else{
      claw = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_X)){
      leftWing.set_value(true);
      rightWing.set_value(true);
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_B)){
      leftWing.set_value(false);
      rightWing.set_value(false);
    }

    delay(2);
  }
}
