//
//  Queue.cpp
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Queue.h"
#include <stdio.h>
#include <iostream>

Queue::Queue() {
    first = NULL;
    last = NULL;
}

void Queue::Add(int value) {
    QueueNode::QueueNode *newNode = new QueueNode::QueueNode(value);
    if(first == NULL){
        first = newNode;
        last = newNode;
    } else {
        last->SetNext(newNode);
        last = newNode;
    }
}

int Queue::Remove() {
    if(first == NULL) {
        std::cout << "The Queue is already empty. Returning '0' " << std::endl;
        return 0;
    } else if (first == last){
        int value = first->GetValue();
        first = last = NULL;
        return value;
    } else {
        int value = first->GetValue();
        first = first->GetNext();
        return value;
    }
}

Queue::~Queue() {
    
    while(first != NULL) {
        QueueNode::QueueNode *temp = first->GetNext();
        delete first;
        first = temp;
    }
    
    if(last != NULL) {
        delete last;
    }

}

