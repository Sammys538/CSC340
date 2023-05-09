#include <iostream>
using namespace std;

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
	amount = 50;
	location = 1;
}

void Stops::Print(){
	cout << amount << endl;
	cout << location << endl;
}