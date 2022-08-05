#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *Next;
    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
    }

    ~Node()
    {
        int value = this->data;
    // Memory Free
        if(this->Next != NULL)
        {
            delete Next;
            this->Next = NULL;
        }
    }
};

void printList(Node* &head)
{
    Node* temp = head;
    while( temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
    
}

void deleteNode(int pos, Node* &head)
{
    Node* temp = head;
   
    if(pos == 1)
    {
        head = head->Next;
        temp->Next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int i = 1;
        while(i <= pos)
        {
            prev = curr;
            curr = curr->Next;
            i++;
        }
        prev->Next = curr->Next;
        curr->Next = NULL;
        delete curr;
    }
}

void insertAtHead(Node* &head, int data)
{
    Node *node1 = new Node(data);
    node1->Next = head;
    head = node1;
}

void insertAtTail(Node* &tail, int data)
{
    
    Node* temp = new Node(data);
    tail->Next = temp;
    tail = temp;    
}

void insertAtPosition(Node* &head,Node* tail, int pos, int data)
{
    if(pos == 1)
    {
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < pos -1)
    {
        temp = temp->Next;
        count++;
        /* code */
    }

    if(temp->Next == NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->Next = temp->Next;
    temp->Next = nodeToInsert;
    
}

void insertAtlast(Node* &head, int data)
{
    Node* newNode = new Node(data);
    if(head == NULL)
    {
        head = newNode;
    }

    Node* temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }

    temp->Next = newNode;

}

int main()
{ 
    Node *head = new Node(10);
    Node *tail = head;
    // insertAtTail(tail,30);
    insertAtTail(tail,0);
    insertAtTail(tail,50);
    printList(head);
    insertAtPosition(head,tail,3,80);
    printList(head);
    insertAtPosition(head,tail,4,90);
    printList(head);
    cout<<tail->data<<endl;
    deleteNode(3,head);
    insertAtlast(head,90);
    printList(head);
    return 0;
}


