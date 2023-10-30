#ifndef PASSENGERSTATE_H
#define PASSENGERSTATE_H

#include "FloorButton.h"

class PassengerState{
    
    public:
        virtual int requestElevator(int floorNumber, FloorButton upOrDown) = 0;
        virtual int board() = 0;
        virtual int selectFloorButton(int destFloor) = 0;
        virtual int exit() = 0;
        virtual int overrideDoorTimingOpen() = 0;
        virtual int overrideDoorTimingClose() = 0;
        virtual int pressFireAlarmButton() = 0;
        virtual int pressHelpButton() = 0;
};

#endif