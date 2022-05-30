#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_set<int> s;
        s.insert(k);
        for(int i=0; i<n; i++){
            int prefix_sum += nums[i];
            if(s.find(prefix_sum) != s.end()){
                
            }
        }
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
    cout<<obj.subarraySum(nums,k);  

    return 0;
}