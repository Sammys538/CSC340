#include<iostream>
// #include "List.cpp"
#include "Bus.cpp"
// #include "Route.cpp"
// #include "Stops.cpp"
#include "Node.cpp"
// #include "People.cpp"
// #include "Riders.cpp"
// #include "Driver.cpp"
// #include "Link.cpp"

using namespace std;

int main(){

	cout << "BUS TESTS" << endl;
	Bus test1;
	cout << "Using Print()" << endl;
	test1.Print();
	test1.DropOff();
	test1.Print();
	test1.PickUp();
	test1.Print();
	if(test1.isFull() == 0){
		cout << "Bus is not full" << endl;
	}
	else{
		cout << "Bus is full" << endl;
	}
	cout << "Using SetPassengers()" << endl;
	test1.SetPassengers(25);
	if(test1.isFull() == 0){
		cout << "Bus is not full" << endl;
	}
	else{
		cout << "Bus is full" << endl;
	}
	test1.SetCapacity(30);
	test1.Print();
	
	cout << endl;
	
	cout << "NODES TEST" << endl;
	Bus* test2 = new Bus();
	Node* pointer = new Node(test2);
	pointer->getData()->report();
	cout << endl;
	
	test2->SetCapacity(30);
	pointer->getData()->report();
	
// 	cout << "ROUTE TESTS" << endl;
// 	Route test2;
// 	cout << "Using Print()" << endl;
// 	test2.Print();
// 	cout << "Using GetSchedule()" << endl;
// 	cout << test2.GetSchedule() << endl;
// 	cout << "Using SetSchedule()" << endl;
// 	test2.SetSchedule("5 8 5");
// 	test2.Print();
	
// 	cout << endl;
	
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
	
// 	cout << endl;
	
// 	cout << "NODE TESTS" << endl;
// 	Node test4;
// 	cout << "Using Getters" << endl;
// 	cout << test4.getData() << endl;
// 	cout << test4.getNextNode() << "<- null pointer" << endl;
// 	cout << test4.getPrevNode() << "<- null pointer" << endl;
// 	cout << "Using Setter" << endl;
// 	test4.setData("Test Node");
// 	cout << test4.getData() << endl;
	
// 	cout << endl;
	
// 	cout << "PEOPLE TESTS" << endl;
	
// 	People sammy(nullptr, nullptr, nullptr, "0528", "Sammy", 19);
// 	sammy.print();
// 	People zero;
// 	zero.print();
	
// 	cout << endl;
	
// 	cout << "RIDERS TESTS" << endl;
	
// 	Riders jared(nullptr, nullptr, nullptr, "1010", "Jared", 20, 1.5, 3, 2);
// 	jared.print();
// 	Riders basic;
// 	basic.print();
	
// 	cout << endl;
	
// 	cout << "DRIVERS TESTS" << endl;
	
// 	Driver trucker(nullptr, nullptr, nullptr, "1111", "Dave", 40, "2595", true);
// 	trucker.print();
// 	Driver unknown;
// 	unknown.print();
	
// 	cout << endl;
	
// 	cout << "LIST TESTS" << endl;
	
// 	Link* list = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
// 	list->setData("1");
	
	
// // 	People* sammy = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
// // 	People* jared = new Riders(NULL, NULL, NULL, "string id", "string Name", 21, 5.50, 1, 2);
// 	List* pile = new List();
// 	pile->addNode("jared");
// 	pile->addNode("sammy");
// 	pile->addNode("corey");
// 	pile->printList();
// 	pile->deleteNode("sammy");
// 	pile->printList();
}
