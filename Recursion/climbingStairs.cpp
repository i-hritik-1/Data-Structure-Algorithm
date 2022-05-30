#include<bits/stdc++.h>
using namespace std;

int climbingStairs(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==1 || n==0)
    {
        return 1;
    }

    int count = climbingStairs(n-1) + climbingStairs(n-2);
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<climbingStairs(n)<<endl;
    return 0;
}