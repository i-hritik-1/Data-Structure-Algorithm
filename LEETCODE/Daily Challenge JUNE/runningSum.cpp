#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0; i<nums.size(); i++)
        {
            sum = sum + nums[i];
            ans[i] = sum;
        }
        return ans;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }

    Solution obj;
    vector<int> res = obj.runningSum(nums);

    for(auto it:res)
    {
        cout<<it<<" ";
    }
    
    return 0;
}