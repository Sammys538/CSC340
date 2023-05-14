#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

List::List(){ // defines the constructor functions for the List class
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::addNode(int addData){
    nodePtr n = new Node; // declares and initializes n to point to a new node(samething as Node* nodeptr)
    n -> next = NULL; // node* n points to node* next which is equal to NULL
    n -> data = addData;

     if(head != NULL){
        curr = head;
        while(curr->next != NULL){
            curr = curr -> next;
        }
        curr -> next = n;
     }else{
        head = n;
     }
}

void List::deleteNode(int delData){
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;

    while(curr != NULL && curr->data != delData){
        temp = curr; // used to trail next node, to patch up list if delData is in middle of list
        curr = curr -> next;
    }

    if(curr == NULL){
        cout << delData << " was not in the list" << endl;
        delete delPtr; // always delete data we do not use since c++ does not have a garbage collection
    }else{
        delPtr = curr; // delptr is pointing to the node that we want to delete
        curr = curr -> next; // advances through list
        temp->next = curr; // this patches the list from previous node to next node after the deleted node
        
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }

        delete delPtr;
        cout << "The value: " << delData << " was deleted." << endl;
    }
}

void List::printList(){
    curr = head;
    cout<<endl;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
        cout<<endl;

}

void List::swap(int firData, int secData){
    
}

