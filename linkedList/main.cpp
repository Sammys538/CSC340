#include<iostream>
#include <cstdlib>
//#include "List.h"
#include "List.cpp"

using namespace std;

int main(int argc,char** argv){
    List linkk;
    linkk.addNode(3); 
    linkk.addNode(4);
    linkk.addNode(5);
    linkk.printList();
    
    linkk.deleteNode(555);
 
    linkk.printList();

    return 0;
}