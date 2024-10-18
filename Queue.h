//
// Created by Andrés Torres on 24/09/24.
//
#ifndef QUEUE_H
#define QUEUE_H
#include "QueueNode.h"

class Queue {
private:
    QueueNode* front;
    QueueNode* rear;
public:
    Queue() {
        front = rear = nullptr;
    }
    ~Queue() {
        while(!isEmpty()) {
            dequeue();
        }
    }
    bool isEmpty();
    void enqueue(Node* value);
    Node* peek();
    Node* dequeue();
};

#endif //QUEUE_H
