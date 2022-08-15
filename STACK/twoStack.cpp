#include<bits/stdc++.h>
using namespace std;

class TwoStack{
    private:
    int *arr, cap, top1, top2;
    public:
    TwoStack(int n)
    {
        cap = n;
        top1 = -1;
        top2 = cap;
    }
    void push1(int x)
    {
        if(top1 < top2 -1)
        {
            top1++;
            arr[top1] = x;
        }
        else{
            exit(1);
        }

    }

    void push2(int x)
    {
        if(top1 < top2 -1)
        {
            top2--;
            arr[top2] = x;
        }
        else{
            exit(1);
        }
    }

    int pop1()
    {
        if(top1 >= 0)
        {
            int res = arr[top1];
            top1--;
            return res;
        }
        else{
            exit(1);
        }

    }

    int pop2()
    {
        if(top2 < cap)
        {
            int res = arr[top2];
            top2++;
            return res;
        }
        else{
            exit(1);
        }
        
    }
};

int main()
{
    int n;
    cin>>n;
    
    TwoStack st = TwoStack(n);
    st.push1(30);
    st.push2(40);

    st.push1(99);
    st.push2(100);

    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;


    
    return 0;
}