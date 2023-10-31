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

Node * mergelist(Node *l1,Node *l2)
{
    if(l1 == NULL)  return l2;
    if(l2 == NULL)  return l1;

    Node *newHead = NULL;
    if(l1->data < l2->data){
        newHead = l1;
        l1=l1->next;
    }
    else{
        newHead = l2;
        l2=l2->next;
    }

    Node *p = newHead;
    while(l1 && l2){
        if(l1->data < l2->data){
            p->next = l1;
            l1=l1->next;
        }
        else{
            p->next = l2;
            l2=l2->next;
        }
        p=p->next;
    }

    if(l1){
        p->next = l1;
    }
    else{
        p->next = l2;
    }
    return newHead;
}

Node *sorted(Node *head){

    if(head == NULL || head->next == NULL){
            return head;
        }
        Node *slow = head;
        Node *fast = head->next;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        Node *n = slow->next;
        slow->next =NULL;

        Node *a = sorted(head);
        Node *b= sorted(n);

        return mergelist(a,b);
}
int main()
{
    Node *head1 = takeinput();
    print(head1);
    cout<<endl;
    Node *head2 = takeinput();
    print(head2);
    cout<<endl;

    Node *head3 = mergelist(head1,head2);
    print(head3);
    cout<<endl;
    Node* h4 = sorted(head3);
    print(h4);
    return 0;
}