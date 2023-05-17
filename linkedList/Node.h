#include <iostream>
#ifndef Node_H
#define Node_H

class Node{
	public:
		Node();

		string getData();
		Node* getNextNode();
		Node* getPrevNode();

		void setData(string input);
		void setNextNode(Node* next);
		void setPrevNode(Node* prev);

	private:
		string data;
		Node* nextNode;
		Node* prevNode;
};

#endif