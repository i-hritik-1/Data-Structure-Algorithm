#include<bits/stdc++.h>
using namespace std;
// TC --> O(N)
// SC --> O(H)

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



void printEle(Node *root, int k)
{
    vector<int> ans;
    if(root == NULL)
    {
        return;
    }
    
    if(k==0)
    {
        cout<<root->data<<" ";
    }
    else{
        printEle(root->left,k-1);
        printEle(root->right,k-1);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->right->left = new Node(80);
    int k;
    cin>>k;
    printEle(root,k);
    return 0;
}