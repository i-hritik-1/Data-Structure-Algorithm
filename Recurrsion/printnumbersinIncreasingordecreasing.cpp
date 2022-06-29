#include<bits/stdc++.h>
using namespace std;

void printinc(int n)
{
    if(n <= 0)
    {
        return;
    }

    printinc(n-1);
    cout<<n<<" ";
}

void printdec(int n)
{
    if(n <= 0)
    {
        return;
    }

    cout<<n<<" ";
    printdec(n-1);
}

int main()
{
    int n;
    cin>>n;
    printinc(n);
    cout<<endl;
    printdec(n);
    
    return 0;
}