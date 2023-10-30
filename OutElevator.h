#ifndef OUTELEVATOR_H
#define OUTELEVATOR_H

#include "PassengerState.h"

class OutElevator:PassengerState{
    public:
        int requestElevator(int floorNumber, FloorButton upOrDown);
        int board();
        int selectFloorButton(int destFloor);
        int exit();
        int overrideDoorTimingOpen();
        int overrideDoorTimingClose();
        int pressFireAlarmButton();
        int pressHelpButton();

};

#endif