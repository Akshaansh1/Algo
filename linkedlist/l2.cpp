#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node (int data)
    {
        this->data=data;
        next=NULL;
    }
};

void print(Node* head)
{
    Node *temp = head;
    while(temp  != NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL";
}

Node *takeinput()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1)
    {
        Node *n=new Node(data);
        if(head == NULL)
        {
            head=n;
            tail=n;
        }
        else{
            tail->next=n;       //inserting at tail
            tail=n;
        }

        cin>>data;
    }
    return head;
}

Node *takeinput_reverse()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1)
    {
        Node *n=new Node(data);
        if(head == NULL)
        {
            head=n;
            tail=n;
        }
        else{
            n->next=head;       //inserting at head
            head=n;
        }

        cin>>data;
    }
    return head;
}


int length(Node* head)
{
    int count=0;
    Node *temp = head;
    while(temp  != NULL)
    {
        temp=temp->next;
        count++;
    }

    return count;
}

void printIthnode (Node *head , int i)
{
    if(i<0 || i>length(head)-1)
    {
        cout<<-1;
        return ;
    }

    int count=1;
    while(count<=i)
    {
        head=head->next;
        count++;
    }
    cout<<head->data<<endl;
}

int main()
{
    Node *head=takeinput();
    print(head);

cout<<endl;

    // Node * head2=takeinput_reverse();
    // print(head2);

    // cout<<endl;

    // cout<<length(head);
    // cout<<endl;
    // cout<<length(head2);
    // cout<<endl;

    int i;
    cout<<"Enter The Printing Node : ";
    cin>>i;
    printIthnode(head,i);
    return 0;
}