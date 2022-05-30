#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countPair(vector<int> &nums, int k){
        unordered_map<int, int> mp;
        int count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            count += mp[k-nums[i]];
            mp[nums[i]]++;
        }
        return count;
    }
};

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    Solution obj;
    cout<<obj.countPair(nums,k)<<endl;
    
    return 0;
}