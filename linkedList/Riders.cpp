// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include <iostream>
#include "Riders.h"
using namespace std;

    Riders::Riders(int id, string Name, int Age, double Fare, int Destination, int CurrStop):People(id, Name, Age){
            fare = Fare;
            destination = Destination;
            currStop = CurrStop;
    }
    
    Riders::Riders():People(){
    	fare = 2.5;
    	destination = 3;
    	currStop = 1;
    
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
		cout << "Name: " << name << ", ID: " << ID << ", Age: " << age <<
    		", Destination: " << destination << ", Current Stop: " << currStop << endl;
    }
    
    void Riders::report(){
    	cout << "Name: " << name << ", ID: " << ID << ", Age: " << age << ", Fare: $" << fare << ""
    	", Current Stop: " << currStop << ", Destination: " << destination << endl;
    }
    
    int Riders::rideAmount(){ // NOT USED
    	return 1;
    }
    
    void Riders::boardPass(int input){ // NOT USED
		
	}
