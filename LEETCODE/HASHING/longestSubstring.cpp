#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int len = 0;
        int start = 0, end = s.length();
        int i = 0;
        while(start < end){
            char keys = s[start];
            if(st.count(keys)==0){
                st.insert(keys);
                len = max(len,(int)st.size());
                start++;
            }
            else{
                st.erase(s[i]);
                i++;
            }

        }

        return len;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.lengthOfLongestSubstring(s)<<endl;

    
    return 0;
}