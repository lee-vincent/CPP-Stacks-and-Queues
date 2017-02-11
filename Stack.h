//
//  Stack.h
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "StackNode.h"

class Stack {

private:
    StackNode *top;
    
public:
    Stack();
    ~Stack();
    void Add(int value);
    int Remove();
};

#endif /* Stack_h */
