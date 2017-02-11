//
//  Queue.hpp
//  lab8
//
//  Created by Vincent Lee on 11/20/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <stdio.h>
//#include "QueueNode.h"

struct QueueNode {
    int value;
    QueueNode *next;
    QueueNode *prev;
    QueueNode (int value) {
        this->value = value;
    }
};


class Queue {

private:
    QueueNode *front;
    QueueNode *back;
    
public:
    
    Queue();
    ~Queue();
    void    AddBack(int value);
    int     GetFront();
    void    RemoveFront();

};



#endif /* Queue_h */
