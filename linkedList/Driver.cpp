#include <iostream>
#include "Driver.h"

using namespace std;

        Driver::Driver(Node* Head, Node* Curr, Node* Temp, string id, string Name, int Age, string BusID, bool HasLicense)
            :People(Head,Curr,Temp,id,Name,Age)
        {
            busID = BusID;
            hasLicense = HasLicense;
        }

        Driver::Driver():People(){
        	busID = "0029";
        	hasLicense = true;
        }

        void Driver::setBusID(string BusID){
            busID = BusID;
        }
        void Driver::setLicense(bool HasLicense){
            hasLicense = HasLicense;
        }

        string Driver::getBusID(){
            return busID;
        }
        bool Driver::getHasLicense(){
            return hasLicense;
        }
        
        bool Driver::isDriving(){
            return true;
        }

        bool Driver::onBreak(){
            return true;
        }

        void Driver::print(){
        	cout <<  "Name: " << getName() << ", ID: "  << getID() << ", Age: " << getAge() << ", Bus ID: " << getBusID()
        	 << ", Has License: ";
        	if(getHasLicense() == true){
        		cout << "Yes" << endl;
        	} else{
        		cout << "No" << endl;
        	}
        }

        void Driver::makeList(){
            cout << "Makes  driver list." << endl;
            cout << endl;
        }
