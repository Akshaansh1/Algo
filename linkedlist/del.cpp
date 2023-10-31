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

void deleteAtRandom(Node* &head,int pos)
{
    if(pos == 1){
        Node *temp = head;
        head=head->next;
        delete temp;    ///free memory
    }
    else{
        Node *curr = head;
        Node *prev = NULL;

        int c=1;
        while(c<=pos-1){
            prev = curr;
            curr= curr->next;
            c++;
        }

        prev->next = curr->next;
        delete curr;    //free memory
    }
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
    cout<<"Enter Position : ";
    cin>>pos;
    deleteAtRandom(head,pos);

    cout<<endl;
    print(head);

    return 0;
}