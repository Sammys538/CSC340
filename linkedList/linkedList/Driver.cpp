#include <iostream>
#include "Driver.h"

using namespace std;

        Driver::Driver(nodePtr Head, nodePtr Curr, nodePtr Temp, string id, string Name, int Age, string BusID, bool HasLicense)
            :People(Head,Curr,Temp,id,Name,Age)
        {
            busID = BusID;
            hasLicense = HasLicense;
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
        void Driver::makeList(){
            cout << "Makes  driver list." << endl;
            cout << endl;
        }