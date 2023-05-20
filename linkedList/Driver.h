// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include <iostream>
#include <string>
#include "People.h"
using namespace std;

#ifndef DRIVER_H
#define DRIVER_H

class Driver: public People{

	protected:
        string busID;
        bool hasLicense; 

	public:
        Driver(int id, string Name, int Age, string BusID, bool HasLicense);
        Driver();
        void setBusID(string BusID);
        void setLicense(bool HasLicense);
        string getBusID();
        bool getHasLicense();
        bool isDriving();
        bool onBreak();
        void print();
        void report();
        int rideAmount(); // Not used
        void boardPass(int input); // Not used
};

#endif
