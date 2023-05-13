#include <iostream>
#include "Riders.h"
using namespace std;

    Riders::Riders(nodePtr Head, nodePtr Curr, nodePtr Temp, string id, string Name, int Age, double Fare, int Destination, int CurrStop):People(Head, Curr, Temp, id, Name, Age){
                fare = Fare;
                destination = Destination;
                currStop = CurrStop;
    }
    void Riders::setCurrStop(int CurrStop){
        currStop = CurrStop;
    }
    int Riders::getCurrStop(){
        return currStop;
    }
    void Riders::setFare(double Fare){
        fare = Fare;
    }
    
    void Riders::setDestination(int Destination){
        destination = Destination;
    }

    int Riders::getDesination(){
        return destination;
    }

    double Riders::getFare(){
        return fare;
    }
    void Riders::print(){
        cout <<  "Name: " << getName() << " ID: "  << getID() <<" Age:" << getAge() << "Current Stop: " 
             << getCurrStop() << " Desination: " << getDesination() <<endl;
    }
