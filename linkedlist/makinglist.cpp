#include <iostream>
using namespace std;

class Node
{
    public: 
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

Node *takeinput()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail= NULL;

    while(data != -1)
    {
        Node *n = new Node(data);

        if(head == NULL)
        {
            head=n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }

        cin >> data;
    }
    return head;
}

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

Node *insertIthnode(Node *head, int i, int data)
{
    if (i < 0)
    {
        return head;
    }

    Node *newNode = new Node(data);

    if (i == 0 && head)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *current = head;
    int count = 0;

    while (current != nullptr && count < i - 1)
    {
        current = current->next;
        count++;
    }

    if (current != nullptr)
    {
        newNode->next = current->next;
        current->next = newNode;
    }

    return head;
}


Node *deleteith(Node *head,int i)
{
    if(i<0)
    {
        return head;
    }

    if(i==0 && head)
    {
        return head->next;
    }

    Node *curr = head;
    int count =1;

    while(count < i-1 && curr != NULL)
    {
        curr=curr->next;
        count++;
    }

    if(curr && curr->next)
    {
        curr->next = curr->next->next;
        return head;
    }
    return head;
}


int main()
{
    Node *head = takeinput();
    print(head);

    cout <<endl;
    int o;
    cin>>o ;

    int a;
    cin>>a;
    insertIthnode(head,o,a);
    print(head);

    int i2;
    cin>>i2;
    
    head = deleteith(head,i2);
    print(head);
    return 0;
}