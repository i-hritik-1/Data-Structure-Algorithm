#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        vector<int> ans;
        for(int i = arr.size()-1; i>0; i--){
            maxi = max(maxi,arr[i]);
            ans.push_back(maxi);
        }
        reverse(ans.begin(), ans.end());
        ans.push_back(-1);
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

     vector<int> ans = obj.replaceElements(nums);
     for(int i=0; i<ans.size(); i++){
         cout<<ans[i]<<" ";
     }

    
    
    return 0;
}