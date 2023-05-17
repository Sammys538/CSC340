#include <iostream>
#include "People.h"

using namespace std;

    People::People(Node* Head, Node* Curr, Node* Temp, string id, string Name, int Age):Link(Head,Curr,Temp){
         ID = id;
         name = Name;
         age = Age;
    }

    People::People():Link(){
    	ID = "0000";
    	name = "John Doe";
    	age = 99;
    }

    void People::setID(string id){
        ID = id;
    }
    void People::setName(string Name){
    name = Name;
    }
    void People::setAge(int Age){
        age = Age;
    }
    string People::getID(){
        return ID;
    }
    string People::getName(){
        return name;
    }
    int People::getAge(){
        return age;
    }
    void People::print(){
        cout <<  "Name: " << getName() << ", ID: "  << getID() << ", Age: " << getAge() << endl;
    }
    void People::makeList(){
        cout << "Make People list." << endl;
        cout << endl;
        
    }


