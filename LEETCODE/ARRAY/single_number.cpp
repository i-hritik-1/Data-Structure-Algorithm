#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            ans = ans^nums[i];
        }

        return ans;
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
    cout<<obj.singleNumber(nums)<<endl;
    
    return 0;
}