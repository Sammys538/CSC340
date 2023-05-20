// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include <iostream>
#ifndef Bus_H
#define Bus_H
#include "Link.h"

// Creates Bus Class
class Bus: public Link{
	public:
		int GetCapacity() const;
		int GetBusNumber() const;
		int GetPassengers() const;
		void SetCapacity(int input);
		void SetPassengers(int input);
		void SetBusNumber(int input);
		bool isFull() const;
		Bus();
		Bus(int cap, int busNum, int pass);
		void Print();
		void DropOff();
		void PickUp(int input);
		void report();
		int rideAmount();
		void boardPass(int input);
	private:
		int busNumber;
		int capacity;
		int passengers;
};

#endif
