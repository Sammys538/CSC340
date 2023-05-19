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

	// cout << "BUS TESTS" << endl;
// 	Bus test1;
// 	cout << "Using Print()" << endl;
// 	test1.Print();
// 	test1.DropOff();
// 	
// 	cout << endl;
// 	
// 	test1.Print();
// 	test1.PickUp();
// 	
// 	cout << endl;
// 	
// 	test1.Print();
// 	if(test1.isFull() == 0){
// 		cout << "Bus is not full" << endl;
// 	}
// 	else{
// 		cout << "Bus is full" << endl;
// 	}
// 	cout << endl;
// 	cout << "Using SetPassengers()" << endl;
// 	test1.SetPassengers(25);
// 	if(test1.isFull() == 0){
// 		cout << "Bus is not full" << endl;
// 	}
// 	else{
// 		cout << "Bus is full" << endl;
// 	}
// 	test1.SetCapacity(30);
// 	test1.Print();
// 	
// 	cout << endl;
	
	cout << "Welcome to our Bus System Linked List" << endl;
	// cout << "Enter capacity of the bus:" << endl;
// 	cout << "For random value, enter 0" << endl;
// 	cin >> 	userCap;
// 	
// 	if(userCap == 0){
// 		userCap = (rand() % 50) + 1;
// 	}
// 	cout << "Enter the passengers in your bus. If number is over capacity, automatically choose number between 0 and capacity" << endl;
// 	cout << "If you want a random number, enter 0" << endl;
// 	cin >> userPass;
// 	
// 	if(userPass == 0){
// 		userPass = (rand() % userCap) + 1;
// 	}
// 	else if(userPass > userCap){
// 		userPass = rand() % userCap;
// 	}
// 	
// 	cout << "Enter the Bus Number. For random number, enter 0" << endl;
// 	cin >> busNum;
// 	
// 	if(busNum == 0){
// 		busNum = (rand() % 30) + 1;
// 	}
	
// 	userCap = (rand() % 50) + 1;
// 	userPass = (rand() % userCap) + 1;
// 	busNum = (rand() % 30) + 1;
	
// 	cout << "Creating Bus with Values" << endl;
// 	Bus* test6 = new Bus(userCap, busNum, userPass);
// 	cout << endl;
// 	
// 	Node* pointer6 = new Node(test6);
// 	pointer6->getData()->report();
// 	
// 	cout << endl;
	
	
	
	
	
	// cout << "NODES TEST" << endl;
// 	Bus* test2 = new Bus();
// 	Node* pointer = new Node(test2);
// 	pointer->getData()->report();
// 	cout << endl;
// 	
// 	test2->SetCapacity(30);
// 	pointer->getData()->report();
// 	cout << endl;
// 	
// 	Route* test3 = new Route();
// 	Node* pointer2 = new Node(test3);
// 	pointer2->getData()->report();
// 	cout << endl;
// 	
// 	Stops* test4 = new Stops();
// 	Node* pointer3 = new Node(test4);
// 	pointer3->getData()->report();
// 	cout << endl;
	
	// cout << "LINKED LIST TEST" << endl;
// 	List linkedList;
// 	linkedList.addNode(pointer);
// 	linkedList.addNode(pointer2);
// 	linkedList.printList();
// 	cout << endl;
	
	
// 	int ranAmount;
// 	ranAmount = (rand() % 10) + 1;
	
// 	Stops* second = new Stops(ranAmount, 2);
// 	
// 	int randomAm;
// 	
// 	randomAm = (rand() % 15) + 1;
// 	
// 	Stops* third = new Stops(randomAm, 3);
	
	cout << "STOP 1";
	
	//Creates pointer to first stop object, and is then stored in node
	Stops* first = new Stops();
	Node* stop1 = new Node(first);
	
	
// 	Node* stop2 = new Node(second);
// 	Node* stop3 = new Node(third);


	//Creates firt linked list for first stop and adds node
	List stopList;
	stopList.addNode(stop1);
	
	
	int idGen;
	int ageNum;
	
	// Variables are assigned random int values
	userCap = (rand() % 50) + 1;
	userPass = (rand() % userCap) + 1;
	busNum = (rand() % 30) + 1;
	idGen = (rand() % 20) + 1;
	ageNum = (rand() % 50) + 20;
	
	
	//Creates pointer to driver object that has manual values for parameter
	//Stored in node and then added to linked list object
	Driver* obj5 = new Driver(idGen, "Driver", ageNum, "257", true);
	Node* driver1 = new Node(obj5);
	stopList.addNode(driver1);
	
	//Bus object created and stored in node
	Bus* obj1 = new Bus(userCap, busNum, userPass);
	Node* bus1 = new Node(obj1);
	
	
	//People object created
	// People* obj2 = new People( 528 , "Sammy", 19);
// 	Node* person1 = new Node(obj2);
	
	stopList.addNode(bus1);
	
	int peopleAtStop = stopList.getHead()->getData()->rideAmount();
	
	int ageGen;
	int numGen;
	double fareAm;
	int dest;
	srand(time(0));
	
	
	//Loop that checks amount of people at stop, and creates objects for how many there are
	//Objects are then added to the linked list object
	for(int i = 0; i < peopleAtStop; i++){
		ageGen = (rand() % 50) + 5;
		numGen = (rand() % 888) + 100;
		fareAm = 1.5 + (2.5 - 1.5) * (rand() % 3) / 3;
		dest = (rand() % 3) + 2;
		Riders* obj = new Riders(numGen, "JD", ageGen, fareAm , dest, 1);
		Node* person = new Node(obj);
		stopList.addNode(person);
	}
	
	//Finally, pointer to Route object is created and then added to linked list
	Route* obj3 = new Route("1 2 3 4");
	Node* route1 = new Node(obj3);
	
	stopList.addNode(route1);
	
	// stopList.addNode(person1);
	
	
	
	
	// stopList.addNode(stop2);
// 	stopList.addNode(stop3);

	//List is printed out
	stopList.printList();
	
	
	
	
	
	
	
	
	
// 	cout << "ROUTE TESTS" << endl;
// 	Route test2;
// 	cout << "Using Print()" << endl;
// 	test2.Print();
// 	cout << "Using GetSchedule()" << endl;
// 	cout << test2.GetSchedule() << endl;
// 	cout << "Using SetSchedule()" << endl;
// 	test2.SetSchedule("5 8 5");
// 	test2.Print();
// 	
// 	cout << endl;
// 	
// 	cout << "STOPS TESTS" << endl;
// 	Stops test3;
// 	cout << "Using Print()" << endl;
// 	test3.Print();
// 	cout << "Using all getters" << endl;
// 	cout << test3.GetAmount() << endl;
// 	cout << test3.GetLocation() << endl;
// 	cout << "After using setters" << endl;
// 	test3.SetAmount(100);
// 	test3.SetLocation(5);
// 	test3.Print();
// 	
// 	cout << endl;
// 	
// 	cout << "NODE TESTS" << endl;
// 	Node test4;
// 	cout << "Using Getters" << endl;
// 	cout << test4.getData() << endl;
// 	cout << test4.getNextNode() << "<- null pointer" << endl;
// 	cout << test4.getPrevNode() << "<- null pointer" << endl;
// 	cout << "Using Setter" << endl;
// 	test4.setData("Test Node");
// 	cout << test4.getData() << endl;
// 	
// 	cout << endl;
// 	
// 	cout << "PEOPLE TESTS" << endl;
// 	
// 	People sammy(nullptr, nullptr, nullptr, "0528", "Sammy", 19);
// 	sammy.print();
// 	People zero;
// 	zero.print();
// 	
// 	cout << endl;
// 	
// 	cout << "RIDERS TESTS" << endl;
// 	
// 	Riders jared(nullptr, nullptr, nullptr, "1010", "Jared", 20, 1.5, 3, 2);
// 	jared.print();
// 	Riders basic;
// 	basic.print();
// 	
// 	cout << endl;
// 	
// 	cout << "DRIVERS TESTS" << endl;
// 	
// 	Driver trucker(nullptr, nullptr, nullptr, "1111", "Dave", 40, "2595", true);
// 	trucker.print();
// 	Driver unknown;
// 	unknown.print();
// 	
// 	cout << endl;
// 	
// 	cout << "LIST TESTS" << endl;
// 	Link* list = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
// 	list->setData("1");
// 	
// 	
// // People* sammy = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
// // 	People* jared = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
// 
// 	List* pile = new List();
// 	pile->addNode("jared");
// 	pile->addNode("sammy");
// 	pile->addNode("corey");
// 	pile->printList();
// 	pile->deleteNode("sammy");
// 	pile->printList();
// 	
// 	// cout << "SYSTEM TESTS" << endl;
// // 	System test5;
// 	
	
}
