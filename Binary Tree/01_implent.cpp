#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
// construtor for tree
Node(int d){    
    this->left= NULL;
    this->right= NULL;
    this->data= d;
 }
};
// Function to insert a new node in the tree
Node* buildTree(Node* root)
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter data for inseting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inseting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
// function of inoder traversal 
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root== NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
     cout<<root->data<<" ";
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    //  Inorder Travesal is
     cout<<"Inorder Traversal is : "<<endl;
     inorder(root);
     cout<<endl;
     cout<<"Preorder Traversal is : "<<endl;
     preorder(root);

    return 0;
}