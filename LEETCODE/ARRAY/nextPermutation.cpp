#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int left, right = 0;
        for(int i=1; i<n; i++){
            int prev = nums[i-1];
            if(prev < nums[i]){
                left = i;
                break;
            }
        }
        cout<<left<<endl;
        if(left <= n-1){
            for(int j = n-1; j>=0; j--){
                if(nums[j-1] > nums[j]){
                    right = j-1;
                    break;
                }
            }
            swap(nums[left], nums[right]);
        }
        reverse(nums.begin()+ right, nums.end());

        return nums;
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
    vector<int> ans = obj.nextPermutation(nums);

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}