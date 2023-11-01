

#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node()
    {
        int value=this->data;
        if(this->next=NULL)
        {
            delete next;
            this->next=NULL;
        }
        // cout<<"Memory is free"<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}
void deletNode(int position , Node* &head)
{
    if(position==1)
    {
        Node* temp= head;
        head= head->next;
        // memory free slot
        temp->next=NULL;
        delete temp;
    }
    else{
        // case when we have to delet the middle or end node
        Node* curr= head; // cretede a pointer which point the first node
        Node* prev=NULL; // create a pointer which point the node one before curr

        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main() {
    
    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
    //print(head);

    insertAtTail(tail, 12);    
    insertAtTail(tail, 15);
    insertAtTail(tail, 17);
    insertAtTail(tail, 21);
  print(head);

    // deletNode(1,head);
    deletNode(4,head);
    deletNode(3,head);
    deletNode(2,head);
    print(head);
    


    return 0;
}
