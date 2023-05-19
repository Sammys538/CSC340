#include <iostream>
#ifndef Route_H
#define Route_H

// Creates Route Class
class Route: public Link{
	public:
		void UpdateSchedule();
		void SetSchedule(string input);
		string GetSchedule();
		Route(string input);
		Route();
		void Print();
		void report();
		int rideAmount();
	private:
		string schedule;
};

#endif
