// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
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

Stops::Stops(int stopNum){
	location = stopNum;
	amount = (rand() % 4) + 1;
}

void Stops::Print(){
	cout << "Stop Amount: " <<  amount << ", Stop Location: " << location << endl;
}

void Stops::report(){
	cout << "Stop Amount: " <<  amount << ", Stop Location: " << location << endl;
	cout << endl;
}

int Stops::rideAmount(){ 
	return amount;
}

void Stops::boardPass(int input){ // NOT USED
		
}
