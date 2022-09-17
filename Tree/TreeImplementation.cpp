#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
        if(temp->left)
        {
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
        }
        }
    }

}

Node* buildTree(Node *root)
{
    cout<<"Enter the data for root"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter the data for inserting left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for inserting right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
    
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    return 0;
}
