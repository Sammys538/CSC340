#include<iostream>
using namespace std;

#include "Bus.cpp"
#include "Route.cpp"
#include "Stops.cpp"
#include "Node.cpp"


int main(){

	cout << "BUS TESTS" << endl;
	Bus test1;
	test1.Print();
	if(test1.isFull() == 0){
		cout << "Bus is not full" << endl;
	}
	else{
		cout << "Bus is full" << endl;
	}
	test1.SetPassengers(25);
	if(test1.isFull() == 0){
		cout << "Bus is not full" << endl;
	}
	else{
		cout << "Bus is full" << endl;
	}
	
	cout << endl;
	
	cout << "ROUTE TESTS" << endl;
	Route test2;
	test2.Print();
	cout << test2.GetSchedule() << endl;
	test2.SetSchedule("5 8 5");
	test2.Print();
	
	cout << endl;
	
	cout << "STOPS TESTS" << endl;
	Stops test3;
	test3.Print();
	cout << test3.GetAmount() << endl;
	cout << test3.GetLocation() << endl;
	test3.SetAmount(100);
	test3.SetLocation(5);
	test3.Print();
	
	cout << endl;
	
	cout << "NODE TESTS" << endl;
	Node test4;
	cout << test4.GetData() << endl;
	
}