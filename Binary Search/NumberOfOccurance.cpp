#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfOccurance(vector<int>& nums, int target) {
        vector<int> ans;
        int first = firstOccurance(nums, target);
        int last = lastOccurance(nums, target);
        int occurance = 0;
        if(last == -1 && first == -1){
            occurance = 0;
        }
        else{
            occurance = last - first + 1;
        }
        return occurance;
    }

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

    cout<<obj.numberOfOccurance(nums,target)<<endl;
    
    return 0;
}