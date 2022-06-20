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


// Brute Force
// Find the height of the tree
// print the tree elemnt upto height of the three.
// int height(Node *root)
// {
//     if(root == NULL)
//     {
//         return 0;
//     }
//     return max(height(root->left),height(root->right))+1;

// }


// void printEle(Node *root, int k)
// {
//     vector<int> ans;
//     if(root == NULL)
//     {
//         return;
//     }
    
//     if(k==0)
//     {
//         cout<<root->data<<" ";
//     }
//     else{
//         printEle(root->left,k-1);
//         printEle(root->right,k-1);
//     }
// }

// Apreroch 2 -> USING QUEUE AND NULL CONDITION
// TC - O(N); SC = THETA(WIDTH OF TREE)
// void LevelOrder(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while(q.size() > 1)
//     {
//         Node* curr = q.front();
//         q.pop();
//         if(curr == NULL)
//         {
//             q.push(NULL);
//             continue;
//         }
//         cout<<curr->data<<" ";
//         if(curr->left != NULL) q.push(curr->left);
//         if(curr->right != NULL) q.push(curr->right);
//     }
// }

// Approach -> 3
// TC - O(N), SC - THETA(WIDTH OF TREE)

void LevelOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(q.empty() == false)
    {
        int count = q.size();
        for(int i=0; i<count; i++)
        {
            Node* curr = q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);

        }
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->left ->right->left = new Node(9);
    root->left->right->right = new Node(15);

    LevelOrder(root);
    // cout<<endl;
    // int k = height(root);
    // for(int i=0; i<k; i++)
    // {
    //     printEle(root,i);
    // }
    return 0;
}