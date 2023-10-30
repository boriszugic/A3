#ifndef ELEVATORSTATE_H
#define ELEVATORSTATE_H

class ElevatorState{
    public:
        virtual int floorButton(int floorNumber) = 0;
        virtual int openDoors() = 0;
        virtual int closeDoors() = 0;
        virtual int help() = 0;
        virtual int fireAlarm() = 0;
};

#endif