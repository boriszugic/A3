#ifndef ALARMSIGNAL_H
#define ALARMSIGNAL_H

#include "ControlSystem.h"

#include <string>

using namespace std;

class AlarmSignal {

    public:
        AlarmSignal(const string& _type) : type(_type) {}
        virtual int alert() = 0;

    protected:
        string type;
        ControlSystem cs;

};

#endif