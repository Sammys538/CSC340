using namespace std;
#ifndef LIST_H
#define LIST_H
#include "Node.h"

class List{
private:

    Node* head;
    Node* curr;
    Node* temp;

public:

    List();
    void addNode(Node* addData); 
    void deleteNode(Node* delData);
    void printList();
    void swap(Node* firData,Node* secData);
    Node* getHead();
};

#endif
