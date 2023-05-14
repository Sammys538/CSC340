#include <iostream>
#ifndef Node_H
#define Node_H

// Creates Stops Class
class Node{
	public:
		Node();
		void SetData(string input);
		string GetData();
	private:
		string data;
		Node* nextNode;
		Node* prevNode;
		Node* headNode;
		Node* currNode;		
};

#endif