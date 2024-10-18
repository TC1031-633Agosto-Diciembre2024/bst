//
// Created by Andrés Torres on 18/10/24.
//

#include "QueueNode.h"
#include <iostream>
using namespace std;
Node* QueueNode::getData(){
    return data;
}
void QueueNode::setData(Node* data){
    this->data=data;
}
QueueNode* QueueNode::getNext(){
    return next;
}
void QueueNode::setNext(QueueNode* next) {
    this->next= next;
}
