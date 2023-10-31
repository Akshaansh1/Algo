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

Node *takeinput()
{
    int rootData;
    cout<<"Enter Data : ";
    cin>>rootData;

    if(rootData == -1)
    {
        return NULL;
    }

    Node *root = new Node(rootData);

    Node *l = takeinput();
    Node *r = takeinput();

    root->left = l;
    root->right = r;

    return root;

}

int main()
{
    Node *root = takeinput();
    
    print(root);
}