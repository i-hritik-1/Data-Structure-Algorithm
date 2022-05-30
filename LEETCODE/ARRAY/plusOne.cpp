#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1] == 9 ){
            int i = n-1;
            for( i=n-1; i>=0 && digits[i] == 9; i--){}
            if(i<0){
                digits[i+1] = 1;
                for(int j = i+2; j<n; j++){
                 digits[j] = 0;
                } 
                digits.push_back(0);
                return digits;
            }else{
                digits[i] = 1+digits[i];
                for(int j = i+1; j<n; j++){
                  digits[j] = 0;
                }
                return digits;
            }
    }
      digits[n-1] = 1+ digits[n-1];
      return digits;
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
    vector<int> ans = obj.plusOne(v);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}