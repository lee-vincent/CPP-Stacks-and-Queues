//
//  StackNode.hpp
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef StackNode_h
#define StackNode_h

class StackNode{
    
private:
    
    int value;
    StackNode *next;
    
public:
    
    StackNode(int value, StackNode *node) {
        next = node;
        this->value = value;
    }

    int         GetValue()  {return value;};
    StackNode   *NextNode() {return next;};
    
};


#endif /* StackNode_h */
