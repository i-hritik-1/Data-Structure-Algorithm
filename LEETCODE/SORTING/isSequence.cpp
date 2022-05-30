#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0 &&  t.length()==0){
            return false;
        }

        int count = 0;
        for(int i=0; i<t.length(); i++){
            if(s[count] == t[i]){
                count++;
            }
        }
        bool flag = false;
        if(count == s.length()){
            flag = true;
        }

        return flag;
    }
};

int main()
{
    string s,t;
    cin>>s>>t;
    Solution obj;

    cout<<obj.isSubsequence(s,t)<<endl;
    
    return 0;
}