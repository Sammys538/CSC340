#include <iostream>
using namespace std;

#include "Node.h"

Node::Node(Link* obj){
	this->data = obj;
	nextNode = NULL;
	prevNode = NULL;
}

Link* Node::getData(){
	return this->data;
}

Node* Node::getNextNode(){
	return nextNode;
}

Node* Node::getPrevNode(){
	return prevNode;
}

void Node::setData(Link* input){
	data = input;
}

void Node::setNextNode(Node* next){
	nextNode = next;
}

void Node::setPrevNode(Node* prev){
	prevNode = prev;
}

void Node::print(){
	cout << this->data;
}
