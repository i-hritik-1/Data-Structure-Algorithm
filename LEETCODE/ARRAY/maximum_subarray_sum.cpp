#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int slow  = 0, fast = 1;
        int sum = nums[0];
        while(slow< n){
            int curr_sum = sum + nums[fast];
            while(curr_sum >= sum && fast < n){
                fast++;
            }
            sum = max(sum, curr_sum);
            slow++;
        }
        return sum;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    Solution obj;
    cout<<obj.maxSubArray(v)<<endl;
    
    return 0;
}