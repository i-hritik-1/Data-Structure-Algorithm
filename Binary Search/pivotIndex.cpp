#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum = sum + nums[i];
        }

        int leftSum = 0;
        int rightSum = sum;
 
        for(int i=0; i<nums.size(); i++)
        {
            rightSum = rightSum - nums[i];
            
            if(leftSum == rightSum)
            {
                return i;
            }

            leftSum = leftSum + nums[i];
            
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

    Solution obj;
    cout<<obj.pivotIndex(nums)<<endl;

    return 0;
}