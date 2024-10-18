#include <iostream>

#include "BST.h"
using namespace std;
int main() {
    BST bst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(2);
    bst.insert(7);
    bst.insert(15);
    bst.insert(13);
    bst.insert(18);
    bst.inorder();
    bst.posorder();
    bst.preorder();
    cout<<"La altura del arbol es: "<<bst.calculateHeight()<<endl;
    bst.printByLevel();
    return 0;
}
