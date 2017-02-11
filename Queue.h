//
//  Queue.hpp
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "QueueNode.h"


class Queue {
    
private:
    QueueNode *first;
    QueueNode *last;
    
public:
    Queue();
    ~Queue();
    void Add(int value);
    int Remove();
};

#endif /* Queue_h */
