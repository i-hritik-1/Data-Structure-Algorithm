#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }
            if(mp.find(sum-k) != mp.end()){
                count += mp[sum-k];
            }
            mp[sum]++;
           

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
    int k;
    cin>>k;

    Solution obj;
    cout<<obj.subarraySum(nums,k)<<endl;

    return 0;
}