#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPresent(string allowed, string word)
    {
        bool flag = true;
        set<char> s;
        for(int i=0; i<allowed.size(); i++)
        {
            s.insert(allowed[i]);
        }
        for(int i=0; i<word.size(); i++)
        {
            if(!(s.find(word[i]) != s.end()))
            {
                flag = false;
                break;
            }

        }
        return flag;
    }
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for(int i=0; i<words.size(); i++)
        {
            if(isPresent(allowed,words[i]))
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    int n;
    cin>>n;
    string allowed;
    cin>>allowed;
    vector<string> words(n);

    for(int i=0; i<n; i++)
    {
        cin>>words[i];
    }

    Solution obj;
    cout<<obj.countConsistentStrings(allowed,words)<<endl;



    
    
    return 0;
}