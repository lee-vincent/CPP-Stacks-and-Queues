//
//  StackNode.cpp
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "StackNode.h"


StackNode::StackNode(int value, StackNode::StackNode &node) {
    next = &node;
    this->value = value;
}