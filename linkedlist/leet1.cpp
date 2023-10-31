#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

};

void insert(Node* &head,int element)
{
    Node *temp = head;
    Node *n = new Node();
    n->data = element;

    if(head == NULL)
    {
        head = n;
    }
    else{
        while(temp->next != NULL)
        {
            temp=temp->next;
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
        temp=temp->next;
    }
}

Node *oddeven(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head; 
    }

    Node *oddHead = head;
    Node *evenHead = head->next;

    Node *oddTemp = oddHead;
    Node *evenTemp = evenHead;

    while (evenTemp != NULL && evenTemp->next != NULL)
    {
        oddTemp->next = evenTemp->next;
        oddTemp = oddTemp->next;

        evenTemp->next = oddTemp->next;
        evenTemp = evenTemp->next;
    }

    oddTemp->next = evenHead; 
    return oddHead; 
}


int main()
{
    Node *head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;

        insert(head,data);
    }

    print(head);
    cout<<endl;

    Node *h1 = oddeven(head);

    print(h1);

    return 0;
}