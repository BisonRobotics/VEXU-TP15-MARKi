#include "api.h"

using namespace pros;

Controller joystick(E_CONTROLLER_MASTER);

Motor blDrive(1, true);
Motor mlDrive(2, true);
Motor flDrive(3, true);
Motor brDrive(4);
Motor mrDrive(5);
Motor frDrive(6);

Motor leftDrive[]{blDrive, mlDrive, flDrive};
Motor rightDrive[]{brDrive, mrDrive, frDrive};
// 
// ADIEncoder leftSensor ('A', 'B', true);
// ADIEncoder rightSensor ('C', 'D', false);


//Motor $motorName(PORT_NUMBER, isReversed?);
//Motor $motorGroupName[]{$motorName1, $motorName2};
