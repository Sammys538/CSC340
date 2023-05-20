// Group Members: Sammy Rodriguez, Jared Barbero, and Pablo Partida
#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

List::List(){ // defines the constructor functions for the List class
    head = NULL;
    curr = NULL;
    temp = NULL;
}

Node* List::getHead(){
	return head;
}

void List::addNode(Node* addData){
    Node* n = addData; // declares and initializes n to point to addData
    
     if(head != NULL){
        curr = head;
        while(curr->getNextNode() != NULL){
            curr = curr->getNextNode();
        }
        curr->setNextNode(n);
     }else{
        head = n;
     }
}

void List::deleteNode(Node* delData){
    Node* delPtr = NULL;
    temp = head;
    curr = head;

    while(curr != NULL && curr != delData){
        temp = curr; // used to trail next node, to patch up list if delData is in middle of list
        curr = curr->getNextNode();
    }

    if(curr == NULL){
        cout << delData << " was not in the list" << endl;
        delete delPtr; // always delete data we do not use since c++ does not have a garbage collection
    }else{
        delPtr = curr; // delptr is pointing to the node that we want to delete
        curr = curr->getNextNode();// advances through list
        temp->setNextNode(curr);// this patches the list from previous node to next node after the deleted node
        
        if(delPtr == head){
            head = head->getNextNode();
            temp = NULL;
        }

        delete delPtr;
        // cout << "The value: " << delData << " was deleted." << endl;
    }
}

void List::printList(){ // Prints out nodes in linked list
    curr = head;
    cout<<endl;
    while(curr != NULL){
        curr->getData()->report();
        curr = curr->getNextNode();
    }
        cout<<endl;

}

void List::swap(Node* firData, Node* secData){ // Swap not finished
    
}
