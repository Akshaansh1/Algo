#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public :
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
    cout<<"Enter Root Data : ";
    cin>>rootData;

    TreeNode *root = new TreeNode(rootData);

    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty())
    {
        TreeNode *f = q.front();
        q.pop();

        int leftData;
        cout<<"Enter The Left Data of "<<f->data<<": ";
        cin>>leftData;
        if(leftData != -1)
        {
            TreeNode *child = new TreeNode(leftData);
            q.push(child);
            f->left = child;
        }
        int rightData;
        cout<<"Enter The Right Data of "<<f->data<<": ";
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
    if(root == NULL) return ;   ///base case
    
    cout<<root->data<<": ";

    if(root->left)
    {
        cout<<"L: "<<root->left->data;
    }
    if(root->right)
    {
        cout<<", R: "<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}

void inorder(TreeNode *root)
{
    if(!root) return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    TreeNode *root = takeinput();
    print(root);
    cout<<endl;
    inorder(root);
    cout<<endl;

}