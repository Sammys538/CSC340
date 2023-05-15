
#ifndef LIST_H
#define LIST_H

class List{

    public:

    typedef class Node {
        
        public:
            int data;
            Node* next; 
            Node* prev;

    }* nodePtr;

    nodePtr head;
    nodePtr curr;

    List();
    void addNode(int addData); 
    void deleteNode(int delData);
    void printList();
    void swap(int firData,int secData);
};

#endif
