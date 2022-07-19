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

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);  
    return 0;
}