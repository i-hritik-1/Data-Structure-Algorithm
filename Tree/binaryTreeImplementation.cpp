#include<bits/stdc++.h>
using namespace std;

// Node for storing data and also pointer for left and right child.
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


//Recurssive inorder traversal --> LEFT -> ROOT -> RIGHT

void inorder(Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

//Recurssive preorder traversal --> ROOT -> LEFT -> RIGHT
void preorder(Node *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}

//Recurssive postorder traversal --> LEFT -> RIGHT -> ROOT

void postorder(Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout<<root->data<<" ";
    }
}


Node* buildTree()
{
    int data;
    cin>>data;

    if(data == -1)
    {
        return NULL;
    }

    Node* newNode = new Node(data);

    cout<<"Enter data to the left child "<<data;
    newNode->left = buildTree();
    cout<<"Enter data for the right child"<<data;
    newNode -> right = buildTree();

    return newNode;
}

int main()
{
    Node* root = NULL;

    root = buildTree();

    preorder(root);

    return 0;
}