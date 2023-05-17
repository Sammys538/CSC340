
#include <iostream>
#include <string>
#include "People.h"
using namespace std;

#ifndef RIDERS_H
#define RIDERS_H

class Riders: public People{

   public:
    double fare;
    int destination;
    int currStop;

    Riders(Node* Head, Node* Curr, Node* Temp, string id, string Name, int Age, double Fare, int Destination, int CurrStop);
    Riders();
    void setCurrStop(int CurrStop);
    int getCurrStop();
    void setFare(double Fare);
    void setDestination(int Destination);
    int getDestination();
    double getFare();
    void print();
    void makeList();
    
};
#endif
