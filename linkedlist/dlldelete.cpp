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

void deleteAtRandom(Node* &head,int pos)
{
    if(pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next  = NULL;
        delete temp;
    }

    else{

    Node *prev = NULL;
    Node *curr = head;
    int c=1;
    while(c<=pos-1)
    {
        prev = curr;
        curr=curr->next;
        c++;
    }


    curr->prev = NULL;
    prev->next = curr->next;    
    curr->next = NULL;
    delete curr;
    }

}

int main()
{
    Node *head = getdata();
    print(head);

    cout<<endl;

    int pos;
    cout<<"Enter The Position : ";
    cin>>pos;
    deleteAtRandom(head,pos);
    print(head);
    return 0; 
}