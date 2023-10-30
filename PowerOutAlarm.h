#ifndef POWEROUTALARM_H
#define POWEROUTALARM_H

#include "AlarmSignal.h"

class PowerOutAlarm : public AlarmSignal {
    public:
        PowerOutAlarm() : AlarmSignal("Power Out") {}
        int alert() override {cs.handlePowerOut();}
};

#endif