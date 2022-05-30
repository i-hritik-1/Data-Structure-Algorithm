#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
          int sum = 0;
          vector<int> ans;
          for(int i = 0; i<n; i++){
              sum = nums[i];
              for(int j=i; j<n; j++){
                  ans.push_back(sum);
                  cout<<sum<<endl;
                  sum = sum + nums[j];
              }
          }
          sort(ans.begin(),ans.end());
          int suma = 0;
          for(int i=left-1; i<right; i++){
              suma += ans[i];
          }
          long long int mod = 10e9 + 7;
          suma = suma % mod;
          return suma;
    }
};

int main()
{
    int t;
    cin>>t;
    vector<int> v;
    while(t--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int n, left, right;
    cin>>n>>left>>right;

    Solution obj;
    cout<<obj.rangeSum(v,n,left,right)<<endl;
    
    return 0;
}