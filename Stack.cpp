//
//  Stack.cpp
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Stack.h"
#include <iostream>

Stack::Stack() {
    top = NULL;
}

Stack::~Stack() {
    while(top != NULL) {
        StackNode::StackNode *temp = top->NextNode();
        delete top;
        top = temp;
    }
}


void Stack::Add(int value) {
    StackNode::StackNode *newNode = new StackNode::StackNode(value, (top == NULL) ? NULL : top);
    top = newNode;
}

int Stack::Remove() {
    if(top == NULL) {
        std::cout << "The Stack is already empty. Returning '0' " << std::endl;
        return 0;
    } else {
        int value = top->GetValue();
        top = top->NextNode();
        return value;
    }
}