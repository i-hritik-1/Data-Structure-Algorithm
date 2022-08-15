#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {

    }
};

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
    
    int arr[] = {1,2,3,4};

    Node *head = new Node(arr[0]);
    Node *temp = head;
    for(int i=1; i<4; i++)
    {
        head->next = new Node(arr[i]);
        head = head->next;
    }

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    
    return 0;
}