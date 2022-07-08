#include<bits/stdc++.h>
using namespace std;

//a+k = b;  // a+k = b;

int solve(vector<int> &arr, int k)
{
    vector<int> res;
    set<vector<int>> s;
    map<int,int> mp;
    for(int i=0; i<arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    
    for(int i=0; i<arr.size(); i++)
    {
        if(mp.find(arr[i] + k) != mp.end())
        {
            res.push_back(arr[i]);
            res.push_back(arr[i]+k);
            s.insert(res);
            res.clear();
        }
        
    }
    return s.size();

}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<solve(arr,k)<<endl;
    return 0;
}