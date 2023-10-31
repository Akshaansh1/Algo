#include <iostream>
using namespace std;

class Node
{
public:

    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insert(Node* &head , int data)
{
    Node *n = new Node(data);
    if(head == NULL)
    {
        n->next = head;
        head = n;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node *mergelists(Node *l1, Node *l2)
{
    if(l1 == NULL){return l2;}
    if(l2 == NULL){return l1;}

    Node *newHead = NULL;

    if(l1->data < l2->data )
    {
        newHead = l1;
        l1=l1->next;
    }

    else
    {
        newHead = l2;
        l2=l2->next;
    }

    Node *p = newHead;

    while(l1 && l2)
    {
        if(l1->data <l2->data)
        {
            p->next = l1;
            l1=l1->next;
        }
        else
        {
            p->next = l2;
            l2=l2->next;
        }
        p=p->next;
    }

    if(l1)
    {
        p->next = l1;
    }
    else{
        p->next = l2;
    }

    return newHead;

}

int main()
{
    int n;
    cin>>n;

    Node *head1 = NULL;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;

        insert(head1,data);
    }

    Node *head2 = NULL;

    int m;
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int data;
        cin>>data;

        insert(head2,data);
    }

Node*  head = mergelists(head1,head2);

    print(head);
}
