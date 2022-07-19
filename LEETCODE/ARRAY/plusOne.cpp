#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
       if(digits[n-1] != 9)
       {
        digits[n-1] = digits[n-1] + 1;
        return digits;
       }

       int carry = 0;
       digits[n-1] = digits[n-1] +1;
       carry = digits[n-1]/10;
       digits[n-1] = digits[n-1]%10;
       for(int i = n-2; i >= 0; i--)
       {
        if(carry == 1)
        {
            digits[i] = digits[i] + 1;
            carry = digits[i]/10;
            digits[i] = digits[i]%10;
        }
       }

       if(carry == 1)
       {
        digits.insert(digits.begin(),1);
       }
       return digits;
    }
};

// 9 9 9
// 9 + 1 = 10 -> carry = 1, 

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