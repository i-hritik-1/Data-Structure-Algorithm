#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        int n = strs.size();
        string ans = "";
        
        sort(strs.begin(), strs.end());

        string a = strs[0];
        string b = strs[n-1];

        for(int i=0; i<a.length(); i++){
            if(a[i] == b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};

int main()
{
    int n;
    cin>>n
    vector<string> str(n);

    for(int i=0; i<n; i++){
        cin>>str[i];
    }

    Solution obj;
    cout<<obj.longestCommonPrefix(str)<<endl;
    
    return 0;
}