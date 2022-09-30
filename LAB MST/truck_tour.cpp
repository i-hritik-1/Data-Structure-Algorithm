#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[100005];
    int d[100005];

    for(int i=0; i<n; i++)
    {
       cin>>p[i]>>d[i];
    }

    int rest = 0, amount = 0, sum = 0;

    for(int i=0; i<n; i++)
    {
        p[i] = p[i] - d[i];
        sum = sum + p[i];

        if(amount + p[i] < 0)
        {
            amount = 0;
            rest = i + 1;
        }
        else
        {
            amount  = amount + p[i];
        }
    }

    if(sum >= 0)
    {
        cout<<"Journey is started from petrol pump "<< sum - 1 <<endl;
    }
    else{
        cout<<"We can not compelete the journey. "<<endl;
    }
    
    return 0;
}