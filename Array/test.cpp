#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> ans;
    ans.push_back({1,2,3});

    for(auto it : ans)
    {
        for(auto x : it)
        {
            cout<<x<<endl;
        }
    }
    
    return 0;
}