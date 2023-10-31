#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data !=-1){
        Node *n = new Node(data);

        if(head == NULL){
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


void print(Node *head){
    Node *curr = head;

    while(curr != NULL){
        cout<<curr->data<<" -> ";
        curr=curr->next;
    }
    cout<<"NULL";
}

Node * reverse(Node *head )
{
    Node *prev = NULL;
    Node *curr = head;

    while(curr != NULL)
    {
        Node *forward =  curr->next;
        curr->next = prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

int main()
{
    Node *head = takeinput();
    print(head);
    cout << endl;

    head = reverse(head);

    print(head);
    return 0;
}
