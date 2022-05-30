#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int start =0;
       int end  =0;
       while(start < nums.size()){
           if(nums[start] == 0){
               k--;
           }
           if(k < 0){
               if(nums[end] == 0){
                   k++;
               }
               end++;
           }
           start++;
       }
       return start-end;
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
    int k;
    cin>>k;
    Solution obj;
    cout<<obj.longestOnes(v,k);
    
    return 0;
}
// [1,1,1,0,0,0,1,1,1,1,0], k = 2

// [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3