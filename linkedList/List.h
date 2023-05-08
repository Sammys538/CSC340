
#ifndef LIST_H
#define LIST_H

class List{

    private:
    
    typedef struct Node {

        int data;
        Node* next; // to point to another node in the linked list

    }* nodePtr;
      
    //data members declared in the header file 
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
 
    public: // this is where the functions go
            // declare functions 
    List();
    
        void addNode(int addData); 
        void deleteNode(int delData);
        void printList();
        void swap(int firData,int secData);
};

#endif
