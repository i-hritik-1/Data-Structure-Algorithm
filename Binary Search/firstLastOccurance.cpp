#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = firstOccurance(nums, target);
        int last = lastOccurance(nums, target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
    }
// This is change
    int firstOccurance(vector<int> &nums, int target){
        int start = 0, end = nums.size()-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] < target){
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid -1;
            }
            else{
                if(mid == 0 || nums[mid - 1] != target){
                    return mid;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }

    int lastOccurance(vector<int> &nums, int target){
        int start = 0, end = nums.size()-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] < target){
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid -1;
            }
            else{
                if(mid == nums.size() - 1 || nums[mid + 1] != target){
                    return mid;
                }
                else{
                    start = mid + 1;
                }
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
    int target;
    cin>>target;
    Solution obj;

    vector<int> result = obj.searchRange(nums,target);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
}