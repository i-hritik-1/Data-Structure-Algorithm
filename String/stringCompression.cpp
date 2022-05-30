#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int prev = 0, next = 0;
        int count = 0;
        string ans = "";
        while(prev < chars.size())
        {
            while(chars[prev] == chars[next])
            {
                count++;
                next++;
                
            }
            cout<<endl;

            if(count > 1)
            {
                ans += chars[prev];
                ans += to_string(count);
                count = 0;
                prev = next;
            }
            else{
                ans += chars[prev];
                prev++;
                next++;
            }
        }
        chars.clear();
        for(int i=0; i<ans.size(); i++)
        {
            chars[i] = ans[i];
        }
        return ans.size();
    }
};

int main()
{
    int n;
    cin>>n;
    vector<char> chars(n);
    for(int i=0; i<n; i++)
    {
        cin>>chars[i];
    }

    Solution obj;
    cout<<obj.compress(chars)<<endl;
    
    return 0;
}

// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         string s;
//         for(int i=0;i<chars.size();i++){
//             s+=chars[i];
//         }
//         int count=0;
//         int i=0,j=0;
//         string cnt;
//         while(i<s.length()){
//             while(s[i]==s[j]){
//                 count++;
//                 j++;
//             }
//             if(count>0){
//                 cnt.push_back(s[i]);
//                 if(count>1){
//                     string ch=to_string(count);
//                     cnt+=ch;
//                 }
//                 count=0;
//                 i=j;
//             }
//             else{
//                 i++;
//             }
//         }
//         chars.clear();
//         for(int i=0;i<cnt.size();i++){
//             chars.push_back(cnt[i]);
//         }
//         return chars.size();
//     }
// };