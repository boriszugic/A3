#ifndef PASSENGER_H
#define PASSENGER_H

#include "Elevator.h"
#include "Floor.h"
#include "PassengerState.h"

class Passenger{

    public: 
        int requestElevator(int floorNumber, FloorButton upOrDown);
        int board();
        int selectFloorButton(int destFloor);
        int exit();
        int overrideDoorTimingOpen();
        int overrideDoorTimingClose();
        int pressFireAlarmButton();
        int pressHelpButton();
        int getId();
        int getCurrentFloor();

    private:
        int id;
        int currentFloor;
        int destinationFloor;
        PassengerState* state;
        Elevator e;
        Floor floor;
};

#endif