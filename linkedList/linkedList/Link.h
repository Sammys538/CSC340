
#include "List.h"
#ifndef LINK_H
#define LINK_H

class Link: public List{

    public:
    Link(nodePtr Head, nodePtr Curr, nodePtr Temp);
    virtual void makeList() = 0;
    
};

#endif