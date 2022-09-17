#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    
    sort(arr,arr+n);
    set<int> s;

    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        if(!(s.find(arr[i]) != s.end()))
        {
           s.insert(arr[i]);
           ans.push_back(s.size());
        }
        else
        {
            ans.push_back(s.size());
        }
    }

    int sum = 0;
    for(auto it : ans)
    {
        sum = sum + it;
    }

    cout<<sum<<endl;

    return 0;
}