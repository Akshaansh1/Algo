#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        next= NULL;
    }
};

Node *input()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1)
    {
        Node *n = new Node(data);

        if(head == NULL)
        {
            head = n;
            tail= n;
        }
        else{
            tail->next = n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head)
{
    Node *curr = head;
    while(curr !=NULL){
        cout<<curr->data<<" -> ";
        curr=curr->next;
    }
    cout<<"NULL";
}

bool findelement(Node *head , int data)
{
    if(head == NULL ) return false;

    if(head->next == head)  return true;

    return(head->next,data);
}

int main()
{
    Node *head = input();
    print(head);

    int d;
    cout<<"Enter The value";
    cin>>d;
    cout<<findelement(head,d);
}

