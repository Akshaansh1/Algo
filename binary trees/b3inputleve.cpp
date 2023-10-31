#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void print(Node *root)
{
    if(root == NULL) // base case
    return;

    cout<<root->data<<": ";
    if(root->left)
    {
        cout<<"L:"<<root->left->data;
    }

    if(root->left)
    {
        cout<<",R: "<<root->right->data<<" ";
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}

Node *takeinput()
{
    int rootData ;
    cout<<"Enter Root Data : ";
    cin>>rootData;

    if(rootData == -1)
    {
        return NULL;
    }

    queue<Node *> q;
    Node *root = new  Node(rootData);

    q.push(root);

    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout<<"Enter The Left Child of "<<f->data<<endl;
        int leftchild;
        cin>>leftchild;

        if(leftchild != -1)
        {
            Node *child = new Node(leftchild);
            q.push(child);
            f->left = child;
        }

        cout<<"Enter The Right Child of "<<f->data<<endl;
        int rightchild;
        cin>>rightchild;

        if(rightchild != -1)
        {
            Node *child = new Node(rightchild);
            q.push(child);
            f->right = child;
        }
    }
    return root;
}

int main()
{
    Node *root = takeinput();

    print(root);
}