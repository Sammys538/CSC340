// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include "Link.h"


#include <iostream>
#ifndef Node_H
#define Node_H

class Node{
	public:
		Node(Link* obj);

		Link* getData();
		Node* getNextNode();
		Node* getPrevNode();

		void setData(Link* input);
		void setNextNode(Node* next);
		void setPrevNode(Node* prev);

	private:
		Link* data;
		Node* nextNode;
		Node* prevNode;
};

#endif
