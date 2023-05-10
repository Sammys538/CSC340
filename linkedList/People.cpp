#include <iostream>
#include "List.h"
#include "List.cpp"

using namespace std;

class People: public List{

   public:
        string ID;
        string name;
        int age;

    People(nodePtr Head, nodePtr Curr, nodePtr Temp, string id, string Name, int Age):List(){
         ID = id;
         name = Name;
         age = Age;
    }
    void setID(string id){
        ID = id;
    }
    void setName(string Name){
    name = Name;
    }
    void setAge(int Age){
        age = Age;
    }
    string getId(){
        return ID;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }

};
