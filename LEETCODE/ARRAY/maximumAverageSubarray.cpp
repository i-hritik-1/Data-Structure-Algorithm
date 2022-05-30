#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double avg = 0;
        double sum = 0;
        for(int i =0; i<k; i++){
            sum += nums[i];
        }

        avg = sum/k;

        for(int i=k; i<nums.size(); i++){
            sum = sum + nums[i] - nums[left];
            left++;
            avg = max(avg,sum/k);
        }

        return avg;
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
    cout<<obj.findMaxAverage(nums,k)<<endl;
    

    return 0;
}