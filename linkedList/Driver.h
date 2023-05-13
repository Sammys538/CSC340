
#include <iostream>
#include <string>
#include "People.h"
using namespace std;

#ifndef DRIVER_H
#define DRIVER_H

class Driver: public People{

    public:
        string busID;
        bool hasLicense; 

        Driver(nodePtr Head, nodePtr Curr, nodePtr Temp, string id, string Name, int Age, string BusID, bool HasLicense);
        void setBusID(string BusID);
        void setLicense(bool HasLicense);
        string getBusID();
        bool getHasLicense();
        bool isDriving();
        bool onBreak();
    
};

#endif
