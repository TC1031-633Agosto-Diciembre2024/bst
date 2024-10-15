//
// Created by Andrés Torres on 11/10/24.
//

#include "BST.h"
#include <iostream>

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

//Esta historia continuara .....