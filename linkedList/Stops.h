#include <iostream>
#ifndef Stops_H
#define Stops_H

// Creates Stops Class
class Stops{
	public:
		int GetAmount();
		int GetLocation();
		void SetAmount(int input);
		void SetLocation(int input);
		Stops();
		void Print();
	private:
		int amount;
		int location;
		
};

#endif