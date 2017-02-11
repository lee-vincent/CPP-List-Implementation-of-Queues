//
//  main.cpp
//  lab8
//
//  Created by Vincent Lee on 11/20/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include <iostream>
#include "Queue.h"
void GatherInput (Queue &queue);


int main() {
    
    int choice;
    Queue q;
    
    std::cout << "Enter a positive integer to add to the Queue: ";
    std::cin >> choice;
    
    if(choice <= 0) {
        std::cout << "That is not a positive integer. Exiting program." << std::endl;
        return 0;
    }
    
    q.AddBack(choice);
    
    
    GatherInput(q);
    
    

//    
//    
//
//    
//    Queue q;
//    
//    //print the underflow error
//    std::cout << q.GetFront() << std::endl;    
//    
//    q.AddBack(5);
//    //print 5
//    std::cout << q.GetFront() << std::endl;
//    
//    q.AddBack(6);
//    //print 5
//    std::cout << q.GetFront() << std::endl;
//    
//    q.RemoveFront();
//    //print 6
//    std::cout << q.GetFront() << std::endl;
//    
//    q.AddBack(7);
//    //print 6
//    std::cout << q.GetFront() << std::endl;
//    
//    q.AddBack(8);
//    q.AddBack(9);
//    
//    q.RemoveFront();
//    q.RemoveFront();
//    q.RemoveFront();
//
//    //print 9
//    std::cout << q.GetFront() << std::endl;
//    
//
//    q.RemoveFront();
//    
//    //print underflow error
//    q.RemoveFront();
//
//    q.AddBack(8);
//    q.AddBack(9);
//    
//    //print 8
//    std::cout << q.GetFront() << std::endl;
//    
//    q.AddBack(21);
//    q.AddBack(22);
//    q.AddBack(23);
//    q.AddBack(24);
//    q.AddBack(25);
//    q.AddBack(26);
//    q.AddBack(27);
//    q.AddBack(28);
//    q.AddBack(29);
//    
//    //print 8
//    std::cout << q.GetFront() << std::endl;
//    
//    q.RemoveFront();
//    //print 9
//    std::cout << q.GetFront() << std::endl;
//    
//    q.RemoveFront();
//    //print 21
//    std::cout << q.GetFront() << std::endl;
//    
//    q.RemoveFront();
//    //print 22
//    std::cout << q.GetFront() << std::endl;
//    
//    q.RemoveFront();
//    //print 23
//    std::cout << q.GetFront() << std::endl;
}


void GatherInput (Queue &queue) {
    
    int input;
    std::cout << "Enter 1 to add an integer to the Queue \n2 to remove a value\n3 to display front of queue\nor 4 to exit: ";
    std::cin >> input;
    
    if(input == 1) {
        int choice;
        std::cout << "Enter a positive integer to add to the Queue: ";
        std::cin >> choice;
        
        if(choice <= 0) {
            std::cout << "That is not a positive integer. Exiting program." << std::endl;
            return;
        }
        
        queue.AddBack(choice);
        GatherInput(queue);

        
    } else if (input == 2) {
        std::cout << "Removing " << queue.GetFront() << " from the queue..." << std::endl;
        queue.RemoveFront();
        GatherInput(queue);
        
    } else if (input == 3) {
        std::cout << "The front of the queue is " << queue.GetFront() << "." << std::endl;
        GatherInput(queue);
        
    } else if (input ==4) {
        std::cout << "Exiting..." << std::endl;
        return;
        
    } else {
        std::cout << "Not a valid choice" << std::endl;
        GatherInput(queue);
    }


}
