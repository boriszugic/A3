#ifndef FLOOR_H
#define FLOOR_H

#include "Button.h"
#include "ControlSystem.h"
#include "Passenger.h"
#include <vector>

using namespace std;

class Floor{
    public:
        int buttonUp();
        int buttonDown();
        int getNumber();
    private:
        int number;
        ControlSystem cs;
        vector<Button> buttons;
        vector<Passenger> passengers;
        int requestElevator(int floorNumber);
};

#endif