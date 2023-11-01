#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

// creating the constructor
Node(int data)
{
    this-> data = data;
    this-> next = NULL ; 
}
};
void InsertAtHead(Node* &head, int d)
{
    // creating the node
    Node* temp = new Node(d);
    temp->next = head;
    head= temp;
}
void print( Node* &head)
{
    Node* temp = head;
    while(temp!=0)
     {
        cout<<temp ->data<<" ";
        temp = temp->next;
     }
}
int main(){
        // Creting object of the node
        Node* node1= new Node(10);
         Node* head = node1;
         print(head);

         InsertAtHead(head, 12);
    return 0;
}
