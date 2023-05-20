// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include <iostream>
using namespace std;
#include <string>

#include "Route.h"


//Update Schedule needs to be implemented
string Route::GetSchedule(){
	return schedule;
}

void Route::SetSchedule(string input){
	schedule = input;
}

Route::Route(){
	schedule = "1 2 3 4";
}

Route::Route(string input){
	schedule = input;
}

void updateSchedule(string schedule){
	string str = schedule.substr(2, (schedule.size()-1));
	schedule = str;
}

void Route::Print(){
	cout << schedule << endl;
}

void Route::report(){
	cout << endl;
	cout << "ROUTE" << endl;
	cout << "Schedule: " << schedule << endl;
	cout << "----------------------------------------" << endl;
}

int Route::rideAmount(){ // NOT USED
	return 1;
}

void Route::boardPass(int input){ // NOT USED
		
}

