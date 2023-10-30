#ifndef FIREALARM_H
#define FIREALARM_H

#include "AlarmSignal.h"

class FireAlarm : public AlarmSignal {
    public:
        FireAlarm() : AlarmSignal("Fire") {}
        int alert() override {cs.handleFireAlarm();}
};

#endif