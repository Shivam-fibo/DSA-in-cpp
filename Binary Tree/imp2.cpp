
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
// to create a class for binary tree
class Node {
    public:
    int data;
     Node *left = NULL;
     Node * right = NULL;

    Node(int value)
    {
        data = value;
        left = NULL ;
        right = NULL;

    }
};

int main(){
    // to create a root
    Node * root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);

    return 0;
}