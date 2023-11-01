#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node* head)
{
    Node* temp= head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(Node* head)

{
    int length=0;
    Node* temp=head;

    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    return length;
}
void insertAtTail(Node* &tail, int d)
{
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail=node1;
//     print(head);
//    cout<< getlength(head);
    insertAtTail(tail,20);
    insertAtTail(tail,23);
    insertAtTail(tail,26);
    insertAtTail(tail,58);
    insertAtTail(tail,56);
    insertAtTail(tail,65);
    print(head);
    return 0;
}
