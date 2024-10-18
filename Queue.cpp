//
// Created by Andrés Torres on 24/09/24.
//

#include "Queue.h"
#include <iostream>
using namespace std;

bool Queue::isEmpty() {
    return front==nullptr;
}
void Queue::enqueue(Node* value) {
    QueueNode* newNode= new QueueNode(value);
    newNode->setNext(nullptr);
    if(front==nullptr) {
        front= rear = newNode;
    }else {
        rear->setNext(newNode);
        rear= newNode;
    }
}

Node* Queue::peek() {
    if(isEmpty()) {
        cout<<"Queue empty"<<endl;
        return nullptr;
    }
    return front->getData();
}

Node* Queue::dequeue() {
    if(isEmpty()) {
        cout<<"Queue empty"<<endl;
        return nullptr;
    }
    Node* data= front->getData();
    QueueNode* temp=front;
    front= front->getNext();
    delete temp;
    return data;
}
