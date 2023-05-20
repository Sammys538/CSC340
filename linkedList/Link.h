// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#ifndef LINK_H
#define LINK_H

class Link{

    public:
    	virtual void report() = 0; // To print out information of class
    	virtual int rideAmount() = 0; // Used to get amount of riders at each station/stop
    	virtual void boardPass(int input) = 0; // Used to increment passengers in Bus
    	
    	
//     
};

#endif
