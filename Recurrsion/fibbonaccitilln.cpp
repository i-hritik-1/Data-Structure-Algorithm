#include<bits/stdc++.h>
using namespace std;
int  fibbo(int n, vector<int> &ans)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    int sum = fibbo(n-1,ans) + fibbo(n-2,ans);
    ans.push_back(sum);
}



int main()
{
    int n;
    cin>>n;

    vector<int> ans;
    int res =  fibbo(n,ans);
    ans.push_back(res);
    for(auto it : ans)
    {
        cout<<it<<" ";
    }

    
    return 0;
}