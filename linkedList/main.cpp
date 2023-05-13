#include<iostream>
#include "List.cpp"
#include "Bus.cpp"
#include "Route.cpp"
#include "Stops.cpp"
#include "Node.cpp"
#include "People.cpp"
#include "Riders.cpp"
#include "Driver.cpp"

using namespace std;

int main(){

	// cout << "BUS TESTS" << endl;
	// Bus test1;
	// test1.Print();
	// if(test1.isFull() == 0){
	// 	cout << "Bus is not full" << endl;
	// }
	// else{
	// 	cout << "Bus is full" << endl;
	// }
	// test1.SetPassengers(25);
	// if(test1.isFull() == 0){
	// 	cout << "Bus is not full" << endl;
	// }
	// else{
	// 	cout << "Bus is full" << endl;
	// }
	
	// cout << endl;
	
	// cout << "ROUTE TESTS" << endl;
	// Route test2;
	// test2.Print();
	// cout << test2.GetSchedule() << endl;
	// test2.SetSchedule("5 8 5");
	// test2.Print();
	
	// cout << endl;
	
	// cout << "STOPS TESTS" << endl;
	// Stops test3;
	// test3.Print();
	// cout << test3.GetAmount() << endl;
	// cout << test3.GetLocation() << endl;
	// test3.SetAmount(100);
	// test3.SetLocation(5);
	// test3.Print();
	
	// cout << endl;
	
	// cout << "NODE TESTS" << endl;
	// Node test4;
	// cout << test4.GetData() << endl;
	
	People* jared = new People(NULL, NULL, NULL, "918394079", "Jared Barbero", 23);
	jared->addNode(1);
	jared->addNode(2);
	jared->print();
	jared->printList();
	
	People* sammy = new Riders(NULL, NULL, NULL,"917849294", "Sammy ", 21, 5.99, 1, 3);
	sammy->addNode(1);
	sammy->addNode(3);
	sammy->print();
	sammy->printList();

	People* corey = new Driver(NULL, NULL, NULL, "819493049", "Corey", 33, "004",true);
	corey->addNode(1);
	corey->addNode(2);
	corey->addNode(3);
	corey->addNode(4);
	corey->print();
	corey->printList();

}