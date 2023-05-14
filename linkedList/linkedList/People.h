
#include <iostream>
#include <string>
#include "Link.h"
using namespace std;

#ifndef PEOPLE_H
#define PEOPLE_H

class People: public Link{

   public:
        string ID;
        string name;
        int age;

    People(nodePtr Head, nodePtr Curr, nodePtr Temp, string id, string Name, int Age);
    void setID(string id);
    void setName(string Name);
    void setAge(int Age);
    string getID();
    string getName();
    int getAge();
    void print();
    void makeList();
};

#endif
