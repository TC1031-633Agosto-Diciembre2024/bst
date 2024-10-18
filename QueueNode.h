//
// Created by Andrés Torres on 06/09/24.
//

#ifndef QUEUENODE_H
#define QUEUENODE_H
#include "Node.h"

class QueueNode {
private:
    Node* data;
    QueueNode* next;
public:
    QueueNode(Node* value): data(value),next(nullptr){}
    Node* getData();
    void setData(Node* data);
    void setNext(QueueNode* next);
    QueueNode* getNext();
};

#endif
