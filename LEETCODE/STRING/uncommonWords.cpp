#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> mp;
        string word = "";
        int start = 0;
        int end = s1.length();
        while(start < end){
            if(s1[start] == ' '){
                mp[word]++;
                start++;
            }
            else{
                word = word + s1[start];
                start++;
            }

            cout<<word<<endl;
        }

        vector<string> ans;
        for(auto it:mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    Solution obj;
    vector<string> ans = obj.uncommonFromSentences(s1,s2);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}