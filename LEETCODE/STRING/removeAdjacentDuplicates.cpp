#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int e = s.length()-1;
        ans.push_back(s[0]);
           for(int i=1; i<=e; i++){
               if(ans[ans.length()-1] == s[i]){
                   ans.pop_back();
                   continue;
               }
               else{
                   ans.push_back(s[i]);
               }
           }
           return ans;
    }
};

int main()
{
   string s;
   cin>>s;
   Solution obj;
   cout<<obj.removeDuplicates(s)<<endl; 
    return 0;
}