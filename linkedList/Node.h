#include <iostream>
#ifndef Node_H
#define Node_H

class Node{
	public:
		Node(Link* obj);

		Link* getData();
		Node* getNextNode();
		Node* getPrevNode();

		void setData(string input);
		void setNextNode(Node* next);
		void setPrevNode(Node* prev);

	private:
		Link* data;
		Node* nextNode;
		Node* prevNode;
};

#endif
