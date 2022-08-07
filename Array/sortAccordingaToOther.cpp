#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        for(int i=0; i<arr1.size(); i++)
        {
            mp[arr1[i]]++;
        }

        vector<int> ans;

        for(int i=0; i<arr2.size(); i++)
        {
            for(int j = 0; j<mp[arr2[i]]; j++)
            {
                ans.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);
        }

        for(auto it: mp)
        {
            for(int i =0; i<it.second; i++)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
    }

};

int main()
{
    int n,m;
    cin>>n>>m;
    vector< int> array1(n), array2(m);

    for(int i=0; i<n; i++)
    {
        cin>>array1[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>array2[i];
    }

    Solution obj;
    vector<int> ans = obj.relativeSortArray(array1,array2);

    for(auto it: ans)
    {
        cout<<it<<" ";
    }

    return 0;
}