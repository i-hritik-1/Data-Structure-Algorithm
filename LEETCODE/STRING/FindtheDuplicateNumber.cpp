#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n,0);
        int ans = 0;
        for(int i=0; i<n; i++){
            temp[nums[i]] = temp[nums[i]] + 1;
        }

        for(int i=1; i<=n; i++){
            cout<<temp[i]<<endl;
            if(temp[i] > 1){
                ans = i;
                break;
            }
        }
        return ans;
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
    cout<<obj.findDuplicate(v);
    
    return 0;
}