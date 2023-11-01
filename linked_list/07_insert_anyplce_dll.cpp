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

void insertAtHead(Node* &head , int d){



    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
 
}

void insertAtTail(Node* &tail, int d)

{
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}


// insert at any place
void insertAtPosition(Node* &head , Node* &tail, int position , int d){
//insertion at head
if(position==1)
{
    insertAtHead(head, d);
    return;
}
Node* temp= head;
int cnt=1;
while(cnt<position-1)
{
    temp=temp->next;
    cnt++;
}
//insertion at tail;
if(temp->next==NULL)
{
    insertAtTail(tail,d);
    return;
}
//insertion at position
Node* nodeToInsert= new Node(d);
nodeToInsert->next=temp->next;
temp->next->prev=nodeToInsert;
temp->next=nodeToInsert;
nodeToInsert->prev=temp;
}
int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail=node1;
    insertAtTail(tail,11);
    insertAtTail(tail,17);
    //   print(head);
    insertAtTail(tail,50);
    //   print(head);
    insertAtTail(tail,13);
    //   print(head);
    insertAtTail(tail,8);
    //   print(head);
        insertAtTail(tail,87);
    //   print(head);
        insertAtTail(tail,99);
    //   print(head);
        insertAtTail(tail,1);
      print(head);
    insertAtPosition(head,tail,2,4);
    print(head);

      insertAtPosition(head,tail,3,5);
    print(head);
      insertAtPosition(head,tail,4,6);
    print(head);
      insertAtPosition(head,tail,5,9);
    print(head);

    return 0;
}
