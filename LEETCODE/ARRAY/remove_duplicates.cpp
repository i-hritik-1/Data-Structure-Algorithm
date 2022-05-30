#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0, end = nums.size();
        int count = 0;
        while(start < end){
            int curr_value = nums[start];
            nums.push_back(curr_value);
            count++;
            while(start < end && curr_value == nums[start+1]){
                start++;
                // cout<<start<<endl;
            }
            start++;
            for(int i = 0; i<count; i++){
                nums[i] = nums[end + i];
            } 
        }
        return count;
        
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

    Solution obj;


    int ans = obj.removeDuplicates(nums);

    for(int i=0; i<ans; i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}