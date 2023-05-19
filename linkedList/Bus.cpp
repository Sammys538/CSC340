#include <iostream>
using namespace std;
#include <cstdlib>

#include "Bus.h"

int Bus::GetCapacity() const{
	return capacity;
}

int Bus::GetPassengers() const{
	return passengers;
}

void Bus::DropOff(){
	passengers -= 3;
}

void Bus::PickUp(){
	passengers += 4;
}


int Bus::GetBusNumber() const{
	return busNumber;
}

void Bus::SetCapacity(int input){
	capacity = input;
}

void Bus::SetBusNumber(int input){
	busNumber = input;
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
	srand(time(NULL));
	capacity = (rand() % 50) + 1;
	busNumber = 1;
	passengers = 10;
}

Bus::Bus(int cap, int busNum, int pass){
	capacity = cap;
	busNumber = busNum;
	passengers = pass;
}

void Bus::Print(){
	cout << "Capacity: " << capacity << endl;
	cout << "Bus Number: " << busNumber << endl;
	cout << "Passengers: " << passengers << endl;
}

void Bus::report(){
	cout << "Bus Number: " << busNumber << endl;
	cout << "Capacity of Bus: " << capacity << endl;
	cout << "Passengers in Bus: " << passengers << endl;
	cout << endl;
}

int Bus::rideAmount(){
	return capacity;
}
