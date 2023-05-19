#include <iostream>
#ifndef Bus_H
#define Bus_H

// Creates Bus Class
class Bus{
	public:
		int GetCapacity() const;
		string GetBusNumber() const;
		int GetPassengers() const;
		void SetCapacity(int input);
		void SetPassengers(int input);
		bool isFull() const;
		Bus();
		void Print();
		void DropOff();
		void PickUp();
		void report();
	
	private:
		string busNumber;
		int capacity;
		int passengers;
};

#endif
