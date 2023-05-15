#include <iostream>
using namespace std;

#include "Node.h"


Node::Node(){
	data = "node";
	prevNode = nullptr;
	nextNode = nullptr;
}

string Node::GetData(){
	return data;
}

Node* Node::GetNextNode(){
	return nextNode;
}

Node* Node::GetPrevNode(){
	return prevNode;
}

void Node::SetData(string input){
	data = input;
}

void Node::SetNextNode(Node* next){
	nextNode = next;
}

void Node::SetPrevNode(Node* prev){
	prevNode = prev;
}
