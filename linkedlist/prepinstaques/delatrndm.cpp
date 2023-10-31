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

Node *del(Node *head , int pos)
{
    if(pos<0){
        return head;
    }

    if(pos == 0 && head){
        return head->next;
    }

    int count=1;
    while(count<=pos-1 && head!=NULL)
    {
        head=head->next;
        count++;
    }
    if(head){
        head->next = head->next->next;
    }
    return head;
}

int main()
{
    Node *head = takeinput();
    print(head);

    cout<<endl;
    int pos;
    cin>>pos;
    Node* curr=del(head,pos);

    print(curr);
    return 0;
}