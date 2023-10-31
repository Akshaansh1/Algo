#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next= NULL;
    }
};

Node *takeinput()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data !=-1){
        Node *n = new Node(data);

        if(head == NULL){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;
}

void insertAtHead(Node * &head , int data)
{
    Node *temp =new Node(data);
    temp->next = head;
    head= temp;
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
    temp->next = n;

}

void print(Node *head){
    Node *curr = head;

    while(curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    Node *head = takeinput();
    print(head);
    cout<<endl;
    int pos,data;
    cout<<"Enter Position And data : ";
    cin>>pos>>data;

    insertAtRandom(head,pos,data);

    cout<<endl;
    print(head);

    return 0;
}