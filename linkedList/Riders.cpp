#include <iostream>
#include "Riders.h"
using namespace std;

    Riders::Riders(Node* Head, Node* Curr, Node* Temp, string id, string Name, int Age, double Fare, int Destination, int CurrStop):People(Head, Curr, Temp, id, Name, Age){
                fare = Fare;
                destination = Destination;
                currStop = CurrStop;
    }

    Riders::Riders():People(){
    	fare = 2.5;
    	destination = 3;
    	currStop = 0;
    
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

    int Riders::getDestination(){
        return destination;
    }

    double Riders::getFare(){
        return fare;
    }
    void Riders::print(){
        cout <<  "Name: " << getName() << ", ID: "  << getID() << ", Age:" << getAge() << ", Current Stop: " 
             << getCurrStop() << ", Destination: " << getDestination() << endl;
    }
    void Riders::makeList(){
        cout << "Makes  Riders list." << endl;
        cout << endl;
        
    }
