#include <iostream>
#include <string>
#include "Link.h"
using namespace std;

#ifndef PEOPLE_H
#define PEOPLE_H


//Class that creates People class, which contain ID, name and age
class People: public Link{

	protected:
        int ID;
        string name;
        int age;

	public:
   		People(int id, string Name, int Age);
    	People();
    	void setID(int id);
    	void setName(string Name);
    	void setAge(int Age);
    	int getID();
    	string getName();
    	int getAge();
    	void print();
    	void report();
    	int rideAmount();
};

#endif
