#include "api.h"

using namespace pros;

Controller joystick(E_CONTROLLER_MASTER);

Motor dRB(1, true);
Motor dRF(2, true);
Motor dLB(3);
Motor dLF(4);
Motor driveRight[]{dRB,dRF};
Motor driveLeft[]{dLB,dLF};

Motor armLeft(5);
Motor armRight(6, true);

Motor tiltLeft(7);
Motor tiltRight(8, true);

Motor claw(9);

ADIEncoder leftSensor ('A', 'B', true);
ADIEncoder rightSensor ('C', 'D', false);



void tankDrive(int left, int right){
  for(int x=0;x<2;x++){driveLeft[x] = left;}
  for(int x=0;x<2;x++){driveRight[x] = right;}
}
