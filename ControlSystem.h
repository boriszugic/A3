#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include "Elevator.h"
#include "vector"

class ControlSystem{

    public:
        int sendElevator(int floorNumber);
        int handleHelp();
        int handleDoorObstacles();
        int handleFireAlarm();
        int handleOverload(int limit);
        int handlePowerOut();
        int getNumOfElevators();

    private:
        int call911();
        int repeatedDoorObstacles();
        int connectToBuildingSafetyService();
        int openDoor();
        int closeDoor();
        vector<Elevator> elevators;
        friend class Elevator;
};

#endif