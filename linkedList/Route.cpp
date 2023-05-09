#include <iostream>
using namespace std;

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

void Route::Print(){
	cout << schedule << endl;
}

