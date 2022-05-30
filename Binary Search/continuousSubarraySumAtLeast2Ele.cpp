#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int sum  = 0;
        int modsum = 0;
        for(int i=0; i<n; i++)
        {
            sum = (sum + nums[i])%k;
            if(mp[sum])
            {
                return true;
            }

            mp[modsum]++;
            modsum = sum;
        } 
        return false;       
    }
};


int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;

    Solution obj;
    cout<<obj.checkSubarraySum(nums,k)<<endl;

    return 0;
}