#ifndef DOORSOPEN_H
#define DOORSOPEN_H

#include "ElevatorState.h"

class DoorsOpen:ElevatorState{
    public:
        int floorButton(int floorNumber);
        int openDoors();
        int closeDoors();
        int help();
        int fireAlarm();
};

#endif