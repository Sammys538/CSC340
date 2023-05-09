#include <iostream>
using namespace std;

#include "Bus.h"

int Bus::GetCapacity() const{
	return capacity;
}

string Bus::GetBusNumber() const{
	return busNumber;
}
		
bool Bus::isFull() const{
	return false; // Not implemented yet
}

Bus::Bus(){
	capacity = 2;
	busNumber = "1";
}

void Bus::Print(){
	cout << capacity << endl;
	cout << busNumber << endl;
}