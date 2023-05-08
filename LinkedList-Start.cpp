#include <iostream>
#include <string>


using namespace std;


// Creates People Class, serves as inheritance
class People{
	public:
		string name;
		int age;
		string ID;
};

// Creates Driver Class
class Driver{
	public: 
		bool isDriverDriving() const { return false; };
		bool onBreak() const { return false; };
	private:
		string ID;
		string license;
};

// Creates Riders Class
class Riders{
	public:
		string getDestination() const {
			return destination;
		};
		// Create a get fare function, that takes age as param
		
		
	private:
		string ID;
		string destination;
		int fare;
};

// Creates Route Class
class Route{
	public:
		void UpdateSchedule();
	private:
		string shedule;
};


// Creates Bus Class
class Bus{
	public:
	
		int getCapacity() const{
			return capacity;
		};
		
		string getBusNumber() const {
			return busNumber;
		};
		
		bool isFull() const{ 
			return false; 
		};
		
		void dropOff();
		void pickUp();
	private:
		string busNumber;
		int capacity;
};

// Creates Stops Class, which serves as a node
class Stops{
	public:
		int getAmount() const{
			return amount;
		};
		// int getLocation() const { return location; };
		
		Stops();
		
		Stops(int amount){
			this->amount = amount;
			this->location = nullptr;	
		}
		
	private:
		Stops *location; // Serves as a node
		int amount;
};

Stops::Stops(){
	amount = 0;
	location = nullptr;
}


//Node Class
class Node{
	public: 
		Node* CreateNode(string data);
			// Node* n1 = new Node;
			// n1-> data = data;
			// n1-> nextNode = nullptr;
			// n1-> prevNode = nullptr;
			// return n1; 
		
		Node* CreateNode(string data, Node* end);
   			// Node* newNode = CreateNode(data);
   			// newNode-> prevNode = end;
			// end-> nextNode = newNode;
			// newNode->prevNode = end;
			// end->nextNode = newNode;
			// newNode->nextNode = nullptr;
			// return newNode;
			
		Node* DeleteNode(Node* end);
				
		void PrintLinkedList(Node* node){
			if(node == nullptr){
      			return;
   			}
   			while(node != nullptr){
   				cout << node->data << endl;
   				node = node-> prevNode;
			}
		}
		
		Node(){
			data = "node";
			prevNode = nullptr;
			nextNode = nullptr;
		}
	
	private:
		string data;
		Node* nextNode;
		Node* prevNode;
};

Node* Node::CreateNode(string data){
	Node* n1 = new Node;
	n1-> data = data;
   	n1-> nextNode = nullptr;
   	n1-> prevNode = nullptr;
  	return n1;

}

Node* Node::CreateNode(string data, Node* end){
	Node* newNode = CreateNode(data);
	newNode->prevNode = end;
	end->nextNode = newNode;
	newNode->nextNode = nullptr;
   	return newNode;
}

Node* Node::DeleteNode(Node* target){
   Node* temp1 = target->prevNode;  //Creates temp nodes
   Node* temp2 = target->nextNode;  //Creates temp nodes
   
   if(target->prevNode == nullptr){
      (temp2)->prevNode = nullptr;
      delete target;
      
      return temp2;
      
   } else if(target->nextNode == nullptr){
      
      (temp1)->nextNode = nullptr;
      delete target;
      
      return (temp1);
      
   } else if(target->prevNode != nullptr){
      (temp1)->nextNode = target->nextNode;
      (temp2)->prevNode = (target->prevNode);
      delete target;
      
      return temp1;
      
   } else if(target->nextNode != nullptr){
      (temp2)->prevNode = target->prevNode;
      (temp1)->nextNode = target->nextNode;
      delete target;
      
      return temp1;
   }
  
   return temp1;
}

// Creates Linked List
class LinkedList{
		
};



int main(){

Node n1;
Node* n2 = n1.CreateNode("NEW NODE");
n2 = n1.CreateNode("2nd Node", n2);
n2 = n1.DeleteNode(n2);

n1.PrintLinkedList(n2);

cout << "Hello" << endl;

}