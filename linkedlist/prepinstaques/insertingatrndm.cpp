#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next=NULL;
    }
};

Node *takeinput()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){

        Node *n = new Node(data);

        if(head == NULL){
            head = n ;
            tail = n;
        }

        else{
            tail->next = n; // inserting at tail
            tail = n;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" -> ";
        curr=curr->next;
    }
    cout<<"NULL";
}

Node *insert(Node *head , int pos , int data)
{
    if(pos<0)
    {
        return head;
    }

    if(pos == 0){
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }

    int count =1;
    while(count < pos-1 && head->next !=NULL){
        head = head->next;
        count++;
    }

    if(head){
        Node *n = new Node(data);
        n->next = head ->next;
        head->next = n;
    }
    return head;
}

int main()
{
    Node *head = takeinput();
    print(head);

    cout<<endl;

    int pos,data;
    cout<<"Enter Data and pos : ";
    cin>>data>>pos;

    Node *Curr=insert(head,pos,data);

    print(Curr);


    return 0;
}