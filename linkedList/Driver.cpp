// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include <iostream>
#include "Driver.h"

using namespace std;

        Driver::Driver(int id, string Name, int Age, string BusID, bool HasLicense):People(id,Name,Age){
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
        
        void Driver::report(){
        	cout << "Driver: " << name << ", ID: " << ID << ", Age: " << age << ", Bus ID: " 
        	<< busID << ", Has License: ";
    		if(getHasLicense() == true){
    			cout << "Yes" << endl;
    		} else{
    			cout << "No" << endl;
    		}
        }
        
        int Driver::rideAmount(){ // NOT USED
        	return 1;
        }
        
        void Driver::boardPass(int input){ // NOT USED
			
		}
