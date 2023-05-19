#include <iostream>
#include "People.h"

using namespace std;

    People::People(int id, string Name, int Age){
         ID = id;
         name = Name;
         age = Age;
    }
    
    People::People(){
    	ID = 000;
    	name = "John Doe";
    	age = 99;
    }

    void People::setID(int id){
        ID = id;
    }
    void People::setName(string Name){
    	name = Name;
    }
    
    void People::setAge(int Age){
        age = Age;
    }
    
    int People::getID(){
        return ID;
    }
    
    string People::getName(){
        return name;
    }
    
    int People::getAge(){
        return age;
    }
    
    void People::print(){
        cout << "Name: " << name << ", ID: " << ID << ", Age: " << age <<endl;
    }
    
    void People::report(){
    	cout << "Name: " << name << ", ID: " << ID << ", Age: " << age << endl;
    }
    
    int People::rideAmount(){
		return age;
	}
