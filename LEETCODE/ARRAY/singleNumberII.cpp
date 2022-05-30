#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto &it : mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
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
    cout<<obj.singleNumber(nums);


    return 0;
}