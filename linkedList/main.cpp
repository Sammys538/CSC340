#include<iostream>
#include "List.cpp"
#include "Bus.cpp"
#include "Route.cpp"
#include "Stops.cpp"
#include "Node.cpp"
#include "People.cpp"
#include "Riders.cpp"
#include "Driver.cpp"
#include "Link.cpp"

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
	
	// People* jared = new People(NULL, NULL, NULL, "918394079", "Jared Barbero", 23);
	// jared->addNode("Stop 1");
	// jared->addNode("Stop 2");
	// jared->print();
	// jared->printList();
	// jared->deleteNode("Stop 2");
	// jared->printList();
	// jared->makeList();

	// People* sammy = new Riders(NULL, NULL, NULL,"917849294", "Sammy ", 21, 5.99, 1, 3);
	// sammy->addNode("Stop 1");
	// sammy->addNode("Stop 3");
	// sammy->addNode("Stop 4");
	// sammy->print();
	// sammy->printList();
	// sammy->deleteNode("Stop 3");
	// sammy->printList();
	// sammy->makeList();

	// People* corey = new Driver(NULL, NULL, NULL, "819493049", "Corey", 33, "004",true);
	// corey->addNode("Stop 1");
	// corey->addNode("Stop 2");
	// corey->addNode("Stop 3");
	// corey->addNode("Stop 4");
	// corey->print();
	// corey->printList();
	// corey->makeList();
	
	Link* list = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
	list->setData("1");
	
	
	People* sammy = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
	People* jared = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
	List* pile = new List();
	pile->addNode("jared");
	pile->addNode("sammy");
	pile->addNode("corey");
	pile->printList();
	pile->deleteNode("sammy");
	pile->printList();
}