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

int countstations(Node *head)
{
    int count=0;
    while(head != NULL){
        count++;
        head=head->next;
    }
    int fact=0;
    for(int i=1;i<count;i++){
        fact=fact+i;
    }
    return fact;
}

int main()
{
    Node *head = takeinput();
    print(head);
    cout<<endl;
    cout<<countstations(head);
    return 0;
}