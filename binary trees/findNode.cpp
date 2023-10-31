#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;

    }
};

TreeNode *takeinput()
{
    int rootData;
    cout<<"Enter The Root Data : ";
    cin>>rootData;

    TreeNode *root = new TreeNode(rootData);
    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty())
    {
        TreeNode *f = q.front();
        q.pop();

        cout<<"Enter The Left Data of"<<f->data<<": ";
        int leftData;
        cin>>leftData;

        if(leftData != -1)
        {
            TreeNode *child = new TreeNode(leftData);
            q.push(child);
            f->left = child;
        }

        cout<<"Enter The Right Data of"<<f->data<<": ";
        int rightData;
        cin>>rightData;

        if(rightData != -1)
        {
            TreeNode *child = new TreeNode(rightData);
            q.push(child);
            f->right = child;
        }
    }
    return root;
}

void print(TreeNode *root)
{
    if(!root) return;

    cout<<root->data<<": ";

    if(root->left){
        cout<<"L: "<<root->left->data;
    }
    if(root->right){
        cout<<", R: "<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}

bool isThere(TreeNode *root , int key)
{
    if(!root) return false;

    if(root->data == key)
    {
        return true;
    }

    return isThere(root->left,key) || isThere(root->right,key);
}

int main()
{
    TreeNode *root = takeinput();
    print(root);
    int key;
    cin>>key;
    if(isThere(root,key))
    {
        cout<<"True ";
    }
    else{
        cout<<"False";
    }
    return 0;
}