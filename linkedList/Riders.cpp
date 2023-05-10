#include <iostream>
#include "List.h"
#include "List.cpp"
#include "People.cpp"
using namespace std;

class Riders:public People{

    public:
    int fare;
    int destination;
    
    Riders(nodePtr Head, nodePtr Curr, nodePtr Temp, string id, string Name, int Age,int Fare, int Destination)
            :People(Head,Curr,Temp,id,Name,Age){
                fare = Fare;
                destination = Destination;
    }

    void setFare(int Fare){
        fare = Fare;
    }
    
    void setDestination(int Destination){
        destination = Destination;
    }

    int getDesination(){
        return destination;
    }

    int getFare(){
        return fare;
    }

};