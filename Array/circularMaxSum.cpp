// https://leetcode.com/problems/maximum-sum-circular-subarray/

class Solution {
public:
    int maxSubarraySum(vector<int>&nums)
    {
        int maxi = INT_MIN;
        int sum = 0;
        for(auto it:nums)
        {
            sum += it;
            maxi = max(sum,maxi);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int normalSum = maxSubarraySum(nums);\
            if(normalSum < 0)
            {
                return normalSum;
            }
        
        int arrSum = 0;
       for(int i=0; i<nums.size(); i++)
       {
           arrSum += nums[i];
           nums[i] = -nums[i];
       }
       int invertedMaxSum = maxSubarraySum(nums);
        
        return (max(normalSum, (arrSum+invertedMaxSum)));
    }
};