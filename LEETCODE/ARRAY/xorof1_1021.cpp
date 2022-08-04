#include<bits/stdc++.h>
using namespace std;
int main()
{
    int xori = 0;
    for(int i=1; i<=1021; i++)
    {
        xori = xori ^ i;
    }

    cout<<xori<<endl;
    
    return 0;
}