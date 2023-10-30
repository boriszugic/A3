#ifndef SENSOR_H
#define SENSOR_H

#include "Elevator.h"

class Sensor{
    
    public:
        int arrived();
        int overload();
        int doorObstacles();
    private:
        Elevator e;
};

#endif