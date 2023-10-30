#ifndef IDLE_H
#define IDLE_H

#include "ElevatorState.h"

class Idle:ElevatorState{
    public:
        int floorButton(int floorNumber);
        int openDoors();
        int closeDoors();
        int help();
        int fireAlarm();
};

#endif