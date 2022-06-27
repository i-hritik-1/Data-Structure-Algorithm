// Write a recursive function that print natural numbers till n

#include<bits/stdc++.h>
using namespace std;
void printN(int n,int i)
{
    if(i > n)
    {
        return;
    }
    cout<<i<<" ";
    printN(n,i+1);
}


int main()
{
    int n;
    cin>>n;
    int i = 1;
    printN(n,i);
    return 0;
}