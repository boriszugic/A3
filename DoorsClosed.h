#ifndef DOORSCLOSED_H
#define DOORSCLOSED_H

#include "ElevatorState.h"

class DoorsClosed:ElevatorState{
    public:
        int floorButton(int floorNumber);
        int openDoors();
        int closeDoors();
        int help();
        int fireAlarm();
};

#endif