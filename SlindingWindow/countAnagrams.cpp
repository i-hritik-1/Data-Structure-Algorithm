#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
        unordered_map<char,int> mp;
        int k = pat.size();

        for(int i=0; i<pat.size(); i++)
        {
            mp[pat[i]]++;
        }

        int count = mp.size();

        int i =0, j=0;
        int n = txt.size();
        int ans = 0;
        while(j < n)
        {
            if(mp.find(txt[i]) != mp.end())
            {
                mp[txt[i]]--;
                if(mp[txt[i]] == 0)
                {
                    count--;
                }
            }


            if((i - j + 1) < k)
            {
                i++;
            }
            else
            {
                if(count == 0)
                {
                    ans++;
                }
                if(mp.find(txt[j]) != mp.end())
                {
                    mp[txt[j]]++;
                    if(mp[txt[j]] == 1)
                    {
                        count++;
                    }
                }
                
                i++;
                j++;
            }
        }
        return ans;

	    // code here
	}

};

int main()
{
   string s1, s2;
   cin>>s1>>s2;
   Solution obj;
   cout<<obj.search(s2,s1)<<endl;

    return 0;
}