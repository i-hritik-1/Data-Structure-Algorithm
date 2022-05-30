#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxSumSubarrayOfKSize(vector<int> &nums, int k)
    {
        int sum = 0;
        int maxi = 0;
        for(int i=0;i<k; i++)
        {
            sum += nums[i];
        }
        maxi = max(maxi,sum);
        int j = 0;
        for(int i=k; i<nums.size(); i++)
        {
            sum = sum + nums[i] - nums[j];
            j++;
            maxi = max(maxi, sum);
        }
        
        return maxi;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n; i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    Solution obj;
    cout<<obj.maxSumSubarrayOfKSize(v,k)<<endl;
    return 0;
}