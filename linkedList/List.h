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
    void addNode(string addData); 
    void deleteNode(string delData);
    void printList();
    void swap(string firData,string secData);
};

#endif