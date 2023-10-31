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

Node *mid(Node *head){
    Node *slow = head;
    Node *fast = head->next;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast){                   //even test cases..
        return slow->next;
    }

    return slow;        // return for odd test cases 
}

int main()
{
    Node *head = takeinput();
    print(head);
    cout<<endl;
    cout<< mid(head)->data;
    return 0;
}