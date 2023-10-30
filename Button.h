#ifndef BUTTON_H
#define BUTTON_H

#include <string>

using namespace std;

class Button{
    public:
        Button(int f = -1, std::string d = " ") : id(f), description(d) {}
        int lightOn();
        int lightOff();
        int isLightOn();
        int getId();
        string getDescription();

    private:
        int id;
        string description;
};

#endif