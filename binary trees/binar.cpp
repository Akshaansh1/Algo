#include <iostream>
#include <queue>
using namespace std;

class BTNode
{
public:
    int data;
    BTNode *left;
    BTNode *right;

    BTNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BTNode *insert()
{
    int rootData;
    cout << "Enter Data for the Root Node: ";
    cin >> rootData;

    BTNode *root = new BTNode(rootData);
    queue<BTNode *> q;
    q.push(root);

    while (!q.empty())
    {
        BTNode *currentNode = q.front();
        q.pop();

        int leftData;
        cout << "Enter the Left Data for Node " << currentNode->data << " (or -1 to skip): ";
        cin >> leftData;

        if (leftData != -1)
        {
            currentNode->left = new BTNode(leftData);
            q.push(currentNode->left);
        }

        int rightData;
        cout << "Enter the Right Data for Node " << currentNode->data << " (or -1 to skip): ";
        cin >> rightData;

        if (rightData != -1)
        {
            currentNode->right = new BTNode(rightData);
            q.push(currentNode->right);
        }
    }

    return root;
}

void print(BTNode *root)
{
    if (root == NULL)
        return;

    queue<BTNode *> q;
    q.push(root);

    while (!q.empty())
    {
        BTNode *currentNode = q.front();
        q.pop();

        cout << currentNode->data << ": ";

        if (currentNode->left)
        {
            cout << currentNode->left->data;
            q.push(currentNode->left);
        }

        if (currentNode->right)
        {
            cout << ", " << currentNode->right->data;
            q.push(currentNode->right);
        }

        cout << endl;
    }
}

int height(BTNode *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int lefth = height(root->left);
    int righth = height(root->right);

    return 1 + max(lefth,righth);
}

int main()
{
    BTNode *root = insert();

    cout << "Binary Tree in the desired format:" << endl;
    print(root);

    cout<<"Height is : "<<height(root);
    return 0;
}