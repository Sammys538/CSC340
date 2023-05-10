#include <iostream>
using namespace std;

class Driver: public People{
    private:
        string busID;
        bool hasLicense;

    public:
        Driver(nodePtr Head, nodePtr Curr, nodePtr Temp, string id, string Name, int Age, string BusID, bool HasLicense)
            :People(Head,Curr,Temp,id,Name,Age)
        {
            busID = BusID;
            hasLicense = HasLicense;
        }

        void setBusID(string BusID){
            busID = BusID;
        }
        void setLicense(bool HasLicense){
            hasLicense = HasLicense;
        }

        string getBusID(){
            return busID;
        }
        bool getHasLicense(){
            return hasLicense;
        }
        
        bool isDriving(){
            if(){
                return true;
            }else{
                return false;
            }
        }

        bool onBreak(){
            if(){
                return true;
            }else{
                return false;
            }
        }
    
};