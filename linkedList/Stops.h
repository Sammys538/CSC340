// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include <iostream>
#ifndef Stops_H
#define Stops_H

// Creates Stops Class
class Stops: public Link{
	public:
		int GetAmount();
		int GetLocation();
		void SetAmount(int input);
		void SetLocation(int input);
		Stops();
		Stops(int stopNum);
		void Print();
		void report();
		int rideAmount();
		void boardPass(int input);
	private:
		int amount;
		int location;
		
};

#endif
