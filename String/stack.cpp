#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    for(int i=0; i<4; i++)
    {
        int temp;
        cin>>temp;
        s.push(temp);
    }


    while(s.size() != 0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}