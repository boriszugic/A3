#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <iostream>

//
#include "Display.h"
#include "Sensor.h"
#include "Audio.h"
#include "ControlSystem.h"
#include "Button.h"
#include "Passenger.h"
#include "Door.h"
#include "Bell.h"
#include "ElevatorState.h"
//

class Elevator{
    public:
        int floorButton(int floorNumber);
        int openDoors();
        int closeDoors();
        int help();
        int fireAlarm();
        int getCurrentFloor();

    private:
        int move(int destFloor);
        int addButton(Button b);
        int lightButton(int destFloor);
        int displayAndAudioWarning();
        int handleFireAlarm();
        int handleOverload();
        int handlePowerOut();
        int displayFloor(int floorNum);
        int soundFloor(int floorNum);
        int ringBell();
        int currentFloor;
        int numOfPassengers;
        int currentWeight;
        int maxWeight;
        int* destinationFloors;
        Display display;
        Sensor sensor;
        Door door;
        Audio audio;
        Bell bell;
        ControlSystem cs;
        ElevatorState* state;
        Button* buttons;
        Passenger* passengers;
};

#endif
