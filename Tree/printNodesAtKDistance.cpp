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



vector<int> printEle(Node *root, int k)
{
    vector<int> ans;
    if(root == NULL)
    {
        return ans;
    }
    
    if(k==0)
    {
        ans.push_back(root->data);
    }
    else{
        printEle(root->left,k-1);
        printEle(root->right,k-1);
    }
    return ans;
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
    vector<int> res = printEle(root,k);

    for(auto it:res)
    {
        cout<<it<<" ";
    }
    
    return 0;
}