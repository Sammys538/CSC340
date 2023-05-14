#include <iostream>
#ifndef Route_H
#define Route_H

// Creates Route Class
class Route{
	public:
		void UpdateSchedule();
		void SetSchedule(string input);
		string GetSchedule();
		Route();
		void Print();
	private:
		string schedule;
};

#endif
