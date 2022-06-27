class Solution {
public:
    int FindPivot(vector<int>&nums)
    {
        int start = 0, end = nums.size()-1;
        int mid = start + (end - start)/2;
        while(start <= end)
        {
            if(nums[mid] >= nums[0])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return end;
    }
    int findMin(vector<int>& nums) {
        int pivot = FindPivot(nums);
        if(nums[0] <= nums[nums.size() - 1])
        {
            return nums[0];
        }
        return nums[pivot+1];
    }
};
