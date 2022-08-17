#include<bits/stdc++.h>
using namespace std;

// class Solution
// {
//     public:
//     Node* rotate(Node* head, int k)
//     {

//     }
// };

class Node{
    public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    
    Node *head = new Node(0);
    Node *temp = head;
    for(int i=0; i<=5; i++)
    {
        int temp;
        cin>>temp;
        head->next = new Node(temp);
        head = head->next;
    }
    temp = temp->next;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    
    return 0;
}