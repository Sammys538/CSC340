// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "Bus.cpp"
#include "Node.cpp"
#include "Route.cpp"
#include "Stops.cpp"
#include "List.cpp"
#include "People.cpp"
#include "Riders.cpp"
#include "Driver.cpp"




int main(){

	int userCap;
	int userPass;
	int busNum;
	srand(time(NULL)); // Used to set initial point for generating random numbers

	
	cout << endl;
	cout << "Welcome to our Bus System Linked List" << endl;
	cout << endl;
	
	cout << "STOP 1";
	
	//Creates pointer to first stop object, and is then stored in node
	Stops* first = new Stops();
	Node* stop1 = new Node(first);

	//Creates firt linked list for first stop and adds node
	List stopList;
	stopList.addNode(stop1);
	
	
	int idGen;
	int ageNum;
	
	// Variables are assigned random int values
	userCap = (rand() % 50) + 20;
	userPass = (rand() % 20) + 1;
	busNum = (rand() % 30) + 1;
	idGen = (rand() % 20) + 1;
	ageNum = (rand() % 50) + 20;
	
	
	//Creates pointer to driver object that has manual values for parameter
	//Stored in node and then added to linked list object
	Driver* obj2 = new Driver(idGen, "Driver", ageNum, "257", true);
	Node* driver = new Node(obj2);
	stopList.addNode(driver);
	
	//Bus object created and stored in node
	Bus* obj1 = new Bus(userCap, busNum, userPass);
	Node* bus1 = new Node(obj1);
	
	stopList.addNode(bus1);
	
	int peopleAtStop = stopList.getHead()->getData()->rideAmount();
	
	int ageGen;
	int numGen;
	double fareAm;
	int dest;
	int passengerAmount = 0;
	srand(time(0));
	
	
	//Loop that checks amount of people at stop, and creates objects for how many there are
	//Objects are then added to the linked list object
	for(int i = 0; i < peopleAtStop; i++){
		ageGen = (rand() % 50) + 5;
		numGen = (rand() % 888) + 100;
		fareAm = 1.5 + (2.5 - 1.5) * (rand() % 3) / 3;
		dest = (rand() % 3) + 2;
		Riders* obj = new Riders(numGen, "JD", ageGen, fareAm , dest, 1);
		passengerAmount++;
		Node* person = new Node(obj);
		stopList.addNode(person);
	}
	
	//Finally, pointer to Route object is created and then added to linked list
	Route* obj3 = new Route("1 2 3 4 5");
	Node* route1 = new Node(obj3);
	
	
	stopList.addNode(route1);
	

	//List is printed out
	stopList.printList();
	
	
	
	bus1->getData()->boardPass(passengerAmount); // Updates passengers in Bus
	cout << "STOP 2";
	Stops* second = new Stops(2); // Creates new pointer pointing to stop object
	Node* stop2 = new Node(second); // Stored in node pointer called stop2
	
	List stopList2; // Creates a new linked list object to represent stop 2
	stopList2.addNode(stop2); // Stop object is added to linked list
	
	stopList2.addNode(driver); // Adds Driver
	
	// stopList2.addNode(bus1); // Uncomment if running into errors
	
	for(int i = 0; i < peopleAtStop; i++){
		stopList2.deleteNode(driver->getNextNode()->getNextNode()); // Deletes nodes after next node, which is bus object
	}
	
	stopList2.deleteNode(driver->getNextNode()->getNextNode()); // Deletes next node, which is route
	
	/*Updates variables used to get amount of riders at stop, as well as resets int that keeps track 
	of rider objects created */
	peopleAtStop = stopList2.getHead()->getData()->rideAmount(); 
	passengerAmount = 0;
	
	for(int i = 0; i < peopleAtStop; i++){
		ageGen = (rand() % 50) + 5;
		numGen = (rand() % 888) + 100;
		fareAm = 1.5 + (2.5 - 1.5) * (rand() % 1) / 3;
		dest = (rand() % 3) + 3;
		Riders* obj = new Riders(numGen, "JD", ageGen, fareAm , dest, 2);
		passengerAmount++;
		Node* person = new Node(obj);
		stopList2.addNode(person);
	}
	
	Route* obj4 = new Route("2 3 4 5");
	Node* route2 = new Node(obj4);
	
	stopList2.addNode(route2);
	
	stopList2.printList();
	
	
	bus1->getData()->boardPass(passengerAmount); // Updates passengers in Bus
	cout << "STOP 3";
	Stops* third = new Stops(3); // Creates new pointer pointing to stop object
	Node* stop3 = new Node(third); // Stored in node pointer called stop2
	
	List stopList3; // Creates a new linked list object to represent stop 2
	stopList3.addNode(stop3); // Stop object is added to linked list
	
	stopList3.addNode(driver); // Adds Driver
	
	
	for(int i = 0; i < peopleAtStop; i++){
		stopList3.deleteNode(driver->getNextNode()->getNextNode()); // Deletes nodes after next node, which is bus object
	}
	
	stopList3.deleteNode(driver->getNextNode()->getNextNode()); // Deletes next node, which is route
	
	/*Updates variables used to get amount of riders at stop, as well as resets int that keeps track 
	of rider objects created */
	peopleAtStop = stopList3.getHead()->getData()->rideAmount(); 
	passengerAmount = 0;
	
	for(int i = 0; i < peopleAtStop; i++){
		ageGen = (rand() % 50) + 5;
		numGen = (rand() % 888) + 100;
		fareAm = 1.5 + (2.5 - 1.5) * (rand() % 1) / 3;
		dest = (rand() % 3) + 4;
		Riders* obj = new Riders(numGen, "JD", ageGen, fareAm , dest, 3);
		passengerAmount++;
		Node* person = new Node(obj);
		stopList3.addNode(person);
	}
	
	Route* obj5 = new Route("3 4 5");
	Node* route3 = new Node(obj5);
	
	stopList3.addNode(route3);
	
	stopList3.printList();
	
	
	
	bus1->getData()->boardPass(passengerAmount); // Updates passengers in Bus
	cout << "STOP 4";
	Stops* fourth = new Stops(4); // Creates new pointer pointing to stop object
	Node* stop4 = new Node(fourth); // Stored in node pointer called stop2
	
	List stopList4; // Creates a new linked list object to represent stop 2
	stopList4.addNode(stop4); // Stop object is added to linked list
	
	stopList4.addNode(driver); // Adds Driver
	
	
	for(int i = 0; i < peopleAtStop; i++){
		stopList4.deleteNode(driver->getNextNode()->getNextNode()); // Deletes nodes after next node, which is bus object
	}
	
	stopList4.deleteNode(driver->getNextNode()->getNextNode()); // Deletes next node, which is route
	
	/*Updates variables used to get amount of riders at stop, as well as resets int that keeps track 
	of rider objects created */
	peopleAtStop = stopList4.getHead()->getData()->rideAmount(); 
	passengerAmount = 0;
	
	for(int i = 0; i < peopleAtStop; i++){
		ageGen = (rand() % 50) + 5;
		numGen = (rand() % 888) + 100;
		fareAm = 1.5 + (2.5 - 1.5) * (rand() % 1) / 3;
		dest = (rand() % 1) + 5;
		Riders* obj = new Riders(numGen, "JD", ageGen, fareAm , dest, 4);
		passengerAmount++;
		Node* person = new Node(obj);
		stopList4.addNode(person);
	}
	
	Route* obj6 = new Route("4 5");
	Node* route4 = new Node(obj6);
	
	stopList4.addNode(route4);
	
	stopList4.printList();
	
	
	
	bus1->getData()->boardPass(passengerAmount); // Updates passengers in Bus
	cout << "STOP 5 (Last Stop)";
	Stops* last = new Stops(5); // Creates new pointer pointing to stop object
	Node* stop5 = new Node(last); // Stored in node pointer called stop2
	
	List stopList5; // Creates a new linked list object to represent stop 2
	stopList5.addNode(stop5); // Stop object is added to linked list
	
	stopList5.addNode(driver); // Adds Driver
	
	
	for(int i = 0; i < peopleAtStop; i++){
		stopList5.deleteNode(driver->getNextNode()->getNextNode()); // Deletes nodes after next node, which is bus object
	}
	
	stopList5.deleteNode(driver->getNextNode()->getNextNode()); // Deletes next node, which is route
	
	/*Updates variables used to get amount of riders at stop, as well as resets int that keeps track 
	of rider objects created */
	peopleAtStop = stopList3.getHead()->getData()->rideAmount(); 
	passengerAmount = 0;
	
	for(int i = 0; i < peopleAtStop; i++){
		ageGen = (rand() % 50) + 5;
		numGen = (rand() % 888) + 100;
		fareAm = 1.5 + (2.5 - 1.5) * (rand() % 1) / 3;
		dest = 6;
		Riders* obj = new Riders(numGen, "JD", ageGen, fareAm , dest, 5);
		passengerAmount++;
		Node* person = new Node(obj);
		stopList5.addNode(person);
	}
	
	Route* obj7 = new Route("5");
	Node* route5 = new Node(obj7);
	
	stopList5.addNode(route5);
	
	stopList5.printList();
	
	cout << "End of Program. Thank you." << endl;
}
