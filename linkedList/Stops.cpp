#include <iostream>
using namespace std;
#include <cstdlib>

#include "Stops.h"


int Stops::GetAmount(){
	return amount;
}

int Stops::GetLocation(){
	return location;
}

void Stops::SetAmount(int input){
	amount = input;
}

void Stops::SetLocation(int input){
	location = input;
}


Stops::Stops(){
	srand(time(NULL));
	amount = (rand() % 4) + 1;
	location = 1;
}

Stops::Stops(int riders, int stopNum){
	amount = riders;
	location = stopNum;
}

void Stops::Print(){
	cout << "Amount: " <<  amount << ", Location: " << location << endl;
}

void Stops::report(){
	cout << "Amount: " <<  amount << ", Location: " << location << endl;
	cout << endl;
}

int Stops::rideAmount(){
	return amount;
}
