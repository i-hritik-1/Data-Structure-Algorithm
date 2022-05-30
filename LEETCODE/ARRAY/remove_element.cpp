#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int start = 0, end = n;
        int count = 0;
        while(start < end){
            if(nums[start] != val){
                nums.push_back(nums[start]);
                start++;
                count++;
            }
            else{
                start++;
            }
        }

        for(int i=0; i<count; i++){
            nums[i] = nums[end + i];
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

    int val;
     cin>>val;

    Solution obj;
    int ans = obj.removeElement(nums,val);

    for(int i=0; i<ans; i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}