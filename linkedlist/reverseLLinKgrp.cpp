#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next =NULL;
    }
};

Node *takeinput()
{
    int data;
    cin>>data;

    Node  *head = NULL;
    Node *tail = NULL;

    while(data != -1)
    {
        Node *n = new Node(data);

        if(head == NULL)
        {
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

void print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}

Node *reverseinK (Node *head , int k)
{

    if(head == NULL)
    {
        return NULL;
    }
    Node *forward = NULL;
    Node *prev = NULL;
    Node *curr = head;

    int count=0 ;
    while(curr != NULL && count<k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr= forward;
        count++;
    }

    if(forward!= NULL)
    {
        head->next = reverseinK(forward,k);
    }
    return prev;
}

int main()
{
    Node *head = takeinput();
    print(head);

    cout<<endl;
    int k;
    cout<<"Enter The K groups : ";
    cin>>k;

    head = reverseinK(head , k);
    print(head);
    return 0;
}