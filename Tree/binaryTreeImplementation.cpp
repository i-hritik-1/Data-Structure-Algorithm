#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void inorder(Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(Node *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout<<root->data<<" ";
    }
}



int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);    
    return 0;
}