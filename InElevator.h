#ifndef INELEVATOR_H
#define INELEVATOR_H

#include "PassengerState.h"

class InElevator:PassengerState{
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