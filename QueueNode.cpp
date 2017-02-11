//
//  QueueNode.cpp
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "QueueNode.h"
#include <stdio.h>


QueueNode::QueueNode(int value) {
    next = NULL;
    this->value = value;
}

int QueueNode::GetValue() {
    return this->value;
}

QueueNode *QueueNode::GetNext() {
    return next;
}

void QueueNode::SetNext(QueueNode *node) {
    next = node;
}

QueueNode::~QueueNode() {
    if(next != NULL) {
        delete next;
    }
}