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

void takeinputathead(Node * &head , int data)
{

        Node *n = new Node(data);

            n->next=head;
            head = n;
        }


void print(Node *head){
    Node *curr = head;

    while(curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void insertatpos(Node * &head , int pos , int data){
    Node *temp = head;
    int c=1;

    if(pos == 1)
    {
        takeinputathead(head,data);
        return; 
    }


    while(c <pos -1){
        temp=temp->next;
        c++;
    }
    Node *newNode = new Node(data);
    newNode->next = temp ->next;
    temp->next = newNode;
}

int main()
{
    Node *head = takeinput();
    print(head);
    cout << endl;

    int data, pos;
    cin >> pos >> data;

    insertatpos(head, pos, data);

    print(head);
}







