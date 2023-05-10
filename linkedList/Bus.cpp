#include <iostream>
using namespace std;

#include "Bus.h"

//DropOff and PickUp still need to be implemented

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

Bus::Bus(){
	capacity = 25;
	busNumber = "1";
	passengers = 10;
	
}

void Bus::Print(){
	cout << capacity << endl;
	cout << busNumber << endl;
	cout << passengers << endl;
}
