#include <iostream>
#ifndef Node_H
#define Node_H

class Node{
	public:
		Node();
		string GetData();
		Node* GetNextNode();
		Node* GetPrevNode();
		
		void SetData(string input);
		void SetNextNode(Node* next);
		void SetPrevNode(Node* prev);
		
	private:
	
		string data;
		Node* nextNode;
		Node* prevNode;
		Node* head;
		Node* curr;
};

#endif
