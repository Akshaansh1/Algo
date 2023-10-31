#include <iostream>
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

int main()
{
    Node *root = new Node(1);
    Node *l = new Node(2);
    Node *r = new Node(3);

    root->left = l;
    root->right = r;

    print(root);
}