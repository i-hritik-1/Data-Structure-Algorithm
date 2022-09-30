#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];

    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }

    set<int> s;
    for(int i=0; i<m; i++)
    {
        s.insert(arr2[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(s.find(arr1[i]) == s.end())
        {
            cout<<arr1[i]<<" ";
        }
    }

    
    return 0;
}