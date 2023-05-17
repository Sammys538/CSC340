#include <iostream>
using namespace std;

#include "Node.h"

Node::Node(){
	data = "NULL";
	nextNode = NULL;
	prevNode = NULL;
}

string Node::getData(){
	return data;
}

Node* Node::getNextNode(){
	return nextNode;
}

Node* Node::getPrevNode(){
	return prevNode;
}

void Node::setData(string input){
	data = input;
}

void Node::setNextNode(Node* next){
	nextNode = next;
}

void Node::setPrevNode(Node* prev){
	prevNode = prev;
}