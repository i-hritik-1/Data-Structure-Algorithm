#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        int count = 0;
        while(start<=end){
            int curr_count = 0;
            while (start <= end && nums[start] == 1)
            {
                curr_count++;
                start++;
            }
            count = max(count, curr_count);
            curr_count = 0;
            start++;
        }
        return count;
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
    cout<<obj.findMaxConsecutiveOnes(v)<<endl;

    return 0;
}