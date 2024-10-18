//
// Created by Andrés Torres on 11/10/24.
//

#include "BST.h"
#include <iostream>
#include "Queue.h"
using namespace std;
Node* BST::insertRec(Node* root, int data) {
    if(root==nullptr) {
        root=new Node(data);
    }else if(data < root->getData()) {
        root->setLeft(insertRec(root->getLeft(),data));
    }else {
        root->setRight(insertRec(root->getRight(),data));
    }
    return root;
}

void BST::insert(int data) {
    root=insertRec(root,data);
}

void BST::preorderRec(Node* root) {
    if(root!=nullptr){
        cout<<root->getData()<<",";
        preorderRec(root->getLeft());
        preorderRec(root->getRight());
    }
}

void BST::posorderRec(Node* root) {
    if(root!=nullptr){
        posorderRec(root->getLeft());
        posorderRec(root->getRight());
        cout<<root->getData()<<",";;
    }

}
void BST::inorderRec(Node* root) {
    if(root!=nullptr){
        inorderRec(root->getLeft());
        cout<<root->getData()<<",";
        inorderRec(root->getRight());
    }

}

void BST::preorder(){
    preorderRec(root);
    cout<<endl;
}
void BST::posorder(){
    posorderRec(root);
    cout<<endl;
}
void BST::inorder(){
    inorderRec(root);
    cout<<endl;
}

int BST::calculateHeightRec(Node *root) {
    if(root == nullptr) {
        return -1;
    }
    int leftHeight= calculateHeightRec(root->getLeft());
    int rightHeight= calculateHeightRec(root->getRight());

    return max(leftHeight,rightHeight) + 1;
}

int BST::calculateHeight() {
    return calculateHeightRec(root);
}

void BST::printByLevelRec(Node *root) {
    if(root ==nullptr) {
        return;
    }
    Queue q;
    q.enqueue(root);
    while(!q.isEmpty()) {
        Node* currentNode= q.dequeue();
        cout<<currentNode->getData()<<", ";
        if(currentNode->getLeft()!= nullptr) {
            q.enqueue(currentNode->getLeft());
        }

        if(currentNode->getRight()!=nullptr) {
            q.enqueue(currentNode->getRight());
        }
    }

}

void BST::printByLevel() {
    printByLevelRec(root);

}




//Esta historia continuara .....