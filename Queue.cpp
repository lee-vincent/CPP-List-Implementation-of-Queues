//
//  Queue.cpp
//  lab8
//
//  Created by Vincent Lee on 11/20/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Queue.h"
#include <iostream>


Queue::Queue() {
    QueueNode *node = new QueueNode(-1);
    front = back = node;
    node->next = node->prev = node;
}



Queue::~Queue() {
    QueueNode *start = front;
    front = front->next;
    
    while(front != start) {
        QueueNode *temp = front;
        front = front->next;
        delete temp;
    }
    
    delete start;
    front = back = start = 0;
}



void Queue::AddBack(int value) {
    if(front == back) {
        if(back->value == -1) {
            back->value = value;
        } else if(back->next == front) {
            QueueNode *newNode = new QueueNode(value);
            back->next = back->prev = newNode;
            newNode->next = newNode->prev = front;
            back = newNode;
        } else {
            back->next->value = value;
            back = back->next;
        }
    
    } else if (back->next == front) {
        QueueNode *newNode = new QueueNode(value);
        back->next = newNode;
        newNode->next = front;
        newNode->prev = back;
        front->prev = newNode;
        back = newNode;
    } else {
        back->next->value = value;
        back = back->next;
    }
}

int Queue::GetFront() {
    
    if(front->value == -1) {
        std::cout << "Error Queue is empty returning -1" << std::endl;
        return -1;
    } else {
        return front->value;
    }
}



void Queue::RemoveFront() {
    if(front == back) {
        if(front->value == -1) {
            std::cout << "Error Queue is empty" << std:: endl;
        } else {
            front->value = -1;
        }
    } else {
        front->value = -1;
        front = front->next;
    }

}
















