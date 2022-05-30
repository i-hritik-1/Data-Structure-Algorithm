#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0;int j=0;
        map<char,int> mp;
        int count = 0;
        while(j<s.size())
        {
            mp[s[j]]++;
            if((j-i+1) < 3)
            {
                j++;
            }
            else if((j-i+1) == 3){
                if(mp.size() == 3)
                {
                    count++;
                }

                if(mp[s[i]] == 1)
                {
                    mp.erase(s[i]);
                }
                else{
                    mp[s[i]]--;
                }
                i++;
                j++;
            }
        }
        return count;
    }
};

int main()
{
    string s;
    cin>>s;

    Solution obj;
    cout<<obj.countGoodSubstrings(s)<<endl;
    return 0;
}