#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
       int *arr;
       int size;
       int top;
    
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if(top == size - 1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }


    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Undeflow"<<endl;
        }
        else
        {
            top--;
        }
    }

    void peek()
    {
        if(top < 0)
        {
            cout<<"Stack Undeflow"<<endl;
        }
        else{
            cout<<arr[top]<<endl;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }

        return false;

    }

    int capacity()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else
        {
            return top+1;
        }
    }
};

int main()
{
    int n;
    cin>>n;

    Stack st(n);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.capacity()<<endl;
    st.peek();
    st.pop();
    st.peek();
    

    return 0;
}