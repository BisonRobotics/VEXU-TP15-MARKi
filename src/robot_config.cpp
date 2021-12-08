#include "api.h"

using namespace pros;

Controller joystick(E_CONTROLLER_MASTER);

Motor dRB(4, true);
Motor dRM(12, true);
Motor dRF(6, true);
Motor dLB(5);
Motor dLM(13);
Motor dLF(7);
Motor driveRight[]{dRB,dRM,dRF};
Motor driveLeft[]{dLB,dLM,dLF};

Motor armLeft(9);
Motor armRight(8, true);

Motor tiltLeft(3);
Motor tiltRight(2, true);

Motor claw(10);

ADIEncoder leftSensor ('A', 'B', true);
ADIEncoder rightSensor ('C', 'D', false);

ADIDigitalOut leftWing ('E');
ADIDigitalOut rightWing ('F');

void tankDrive(int left, int right){
  for(int x=0;x<3;x++){driveLeft[x] = left;}
  for(int x=0;x<3;x++){driveRight[x] = right;}
}
