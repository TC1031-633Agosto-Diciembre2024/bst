//
// Created by Andrés Torres on 11/10/24.
//

#ifndef BST_H
#define BST_H
#include "Node.h"


class BST {
private:
    Node* root;
    Node* insertRec(Node* root, int data);
    void preorderRec(Node* root);
    void posorderRec(Node* root);
    void inorderRec(Node* root);
    int calculateHeightRec(Node* root);
    void printByLevelRec(Node* root);

public:
    BST():root(nullptr){}
    void insert(int data);
    void preorder();
    void posorder();
    void inorder();
    int calculateHeight();
    void printByLevel();


};



#endif //BST_H
