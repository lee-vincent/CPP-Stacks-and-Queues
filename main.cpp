//
//  main.cpp
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include "Stack.h"
#include <sstream>
#include "Queue.h"

int main() {

    Stack myStack;
    myStack.Add(10);
    myStack.Add(5);
    myStack.Add(7);
    myStack.Add(8);
    myStack.Remove();
    myStack.Add(3);
    
    
    for(int i = 0; i < 10; i++) {
        std::ostringstream stm;
        stm << myStack.Remove();
        std::cout << stm.str() << '\n';
    }

    Queue myQueue;
    myQueue.Add(32);
    myQueue.Add(72);
    myQueue.Remove();
    myQueue.Add(6);
    myQueue.Add(542);
    myQueue.Add(452);

    
    for(int i = 0; i < 10; i++) {
        std::ostringstream stm;
        stm << myQueue.Remove();
        std::cout << stm.str() << '\n';
    }
    
}
