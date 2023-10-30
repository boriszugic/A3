#ifndef MOVING_H
#define MOVING_H

#include "ElevatorState.h"

class Moving:ElevatorState{
    public:
        int floorButton(int floorNumber);
        int openDoors();
        int closeDoors();
        int help();
        int fireAlarm();
};

#endif