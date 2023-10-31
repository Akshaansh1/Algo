#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void print(Node *head){
    Node *temp =head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertAtHead(Node * &head , int data)
{
    Node *temp =new Node(data);
    temp->next = head;
    head->prev = temp;
    head= temp;
}

Node* getdata()
{
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data !=-1)
    {
        Node *n = new Node(data);
        if(head == NULL)
        {
            head = n;
            tail = n;
        }
        else{
            tail ->next = n;
            n->prev = tail;
            tail = n;
        }
        cin>>data;
    }
    return head;
}

void insertAtRandom(Node* &head,int pos,int data)
{
    if(pos == 1)
    {
        insertAtHead(head,data);
        return;
    }

    int c=1;
    Node *temp = head;

    while(c<pos-1)
    {
        temp=temp->next;
        c++;
    }
    Node *n = new Node(data);
    n->next = temp->next;
    temp->next->prev=n;
    temp->next = n ;
    n->prev = temp;


}

int main()
{
    Node *head = getdata();
    print(head);

    cout<<endl;

    int data,pos;
    cout<<"Enter Data and pos : ";
    cin>>pos>>data;
    insertAtRandom(head,pos,data);

    print(head);
    return 0; 
}