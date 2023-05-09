#include <iostream>
#ifndef Bus_H
#define Bus_H

// Creates Bus Class
class Bus{
	public:
	
		int GetCapacity() const;
		
		string GetBusNumber() const;
		
		bool isFull() const;
		
		Bus();
		
		void Print();
		
		void dropOff();
		void pickUp();
	private:
		string busNumber;
		int capacity;
};

#endif

