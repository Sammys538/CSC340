#include <iostream>
using namespace std;

#include "Bus.h"

int Bus::GetCapacity() const{
	return capacity;
}

int Bus::GetPassengers() const{
	return passengers;
}


string Bus::GetBusNumber() const{
	return busNumber;
}

void Bus::SetCapacity(int input){
	capacity = input;
}

void Bus::SetPassengers(int input){
	passengers = input;
}		

bool Bus::isFull() const{
	if(passengers >= capacity){
		return true;
	}
	
	return false;
}

void Bus::DropOff(){
	passengers -= 3;
}

void Bus::PickUp(){
	passengers += 4;
}

Bus::Bus(){
	capacity = 25;
	busNumber = "1";
	passengers = 10;
	
}

void Bus::Print(){
	cout << "Capacity: " << capacity << endl;
	cout << "Bus Number: " << busNumber << endl;
	cout << "Passengers: " << passengers << endl;
}

void Bus::report(){
	cout << "Capacity: " << capacity << endl;
	cout << "Bus Number: " << busNumber << endl;
	cout << "Passengers: " << passengers << endl;
}
