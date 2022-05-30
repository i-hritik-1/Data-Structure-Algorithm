#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findPivot(vector<int> &nums)
    {
        int start = 0, end = nums.size();
        int mid = start + (end - start)/2;
        while(start < end)
        {
            if(nums[start] >= nums[0])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return start;
    }

    int BinarySearch(vector<int> &nums, int target, int start, int end)
    {
        while (start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        
        return -1;
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
    cout<<obj.findPivot(nums)<<endl;
    int pivot = obj.findPivot(nums);
    cout<<obj.BinarySearch(nums,k,pivot,n-1)<<endl;
    
    return 0;
}