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
    ~Node()
    {
        int value=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
    }
};
void print(Node* head)
{
    Node* temp= head;
    while(temp != NULL)
    {
        cout<<temp->data <<" ";
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
void insertAtHead(Node* &head , int d)
{
    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
 
}
void deletNode(Node* &head, int position)
{
    // deleting the first node
    if(position==1)
    {
        Node* temp= head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting at any postion
        Node* current=head;
        Node* previous=NULL;
        int cnt=1;
        while(cnt<position)
        {
            previous=current;
            current=current->next;
            cnt++;
        }
        current->prev=NULL;
        previous->next=current->next;
        current->next=NULL;
        delete current;


    }
}
int main(){ 
    Node* node1= new Node(10);
    Node* head= node1;
    // print(head);
//    cout<< getlength(head);
   insertAtHead(head, 15);
   insertAtHead(head, 185);
   insertAtHead(head, 5);
   insertAtHead(head, 2);
   
   print(head);
   deletNode(head,2);

   print(head);
    return 0;
}
