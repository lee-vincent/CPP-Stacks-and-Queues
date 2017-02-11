//
//  QueueNode.hpp
//  lab6
//
//  Created by Vincent Lee on 11/5/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef QueueNode_h
#define QueueNode_h


class QueueNode {
    
private:
    int value;
    QueueNode *next;
    
public:
    
    QueueNode(int value);
    int GetValue();
    QueueNode *GetNext();
    void SetNext(QueueNode *node);
    ~QueueNode();
};


#endif /* QueueNode_h */
