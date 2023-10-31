#include <iostream>
using namespace std;

class Node
{
    public : 
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1)
    {
        Node *n= new Node(data);
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
    Node *temp =head;

    while(temp != NULL)
    {
    cout<<temp->data<<" -> ";
    temp=temp->next;
    }

    cout<<"NULL";
}

int length(Node *head)
{
    if(head == NULL){
        return 0;
    }

    int smallcase = length(head->next);
    return 1 + smallcase;
}

bool isPresent(Node *head,int data)
{
    Node *curr=head;

    while(curr!=NULL)
    {
        if(curr->data = data){
            return true;
        }
        curr=curr->next;
    }
    return false;
}

int main()
{
    Node *head = takeinput();

    print(head);

    cout<<endl;
    cout<<"Length is : "<<length(head);

    cout<<endl;
    int d;
    cout<<"Enter The data to be searched : ";
    cin>>d;

    bool ans = isPresent(head,d);

    if(ans){
        cout<<"Found ";
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}