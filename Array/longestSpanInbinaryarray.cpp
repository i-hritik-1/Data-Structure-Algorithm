#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestCommonSum(vector<bool> arr1, vector<bool> arr2, int n) {
        
            // code here 
    }
};

int main()
{
    int n;
    cin>>n;
    vector<bool> arr1(n), arr2(n);
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }

    Solution obj;
    cout<<obj.longestCommonSum(arr1,arr2,n)<<endl;



    
    return 0;
}