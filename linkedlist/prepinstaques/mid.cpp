#include <iostream>
using namespace std;

class Node{
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
            tail->next=n;     
            tail=n;
        }

        cin>>data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}

Node *findmid(Node *head)
{
    Node *slow = head;
    Node *fast =head->next;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
        if(fast == NULL)
        {
            return slow;
        }
        if(fast)
        {
            return slow->next;
        }
        return slow;
}
int main()
{
    Node *head = takeinput();
    print(head);
    cout<<endl;
    cout<<findmid(head)->data;
    return 0;

}