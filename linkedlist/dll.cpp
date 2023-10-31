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

int main()
{
    Node *head = getdata();
    print(head);
    return 0; 
}