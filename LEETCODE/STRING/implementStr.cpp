#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }

        int i =0, j=0;
        while(i < haystack.length() && j < needle.length()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j == needle.length()){
                    return (i-j);
                }
            }
            else{
                i = i-j + 1;
                j = 0;
            }
        }
        return -1;
    }
};

int main()
{
    string haystack, needle;
    cin>>haystack>>needle;

    Solution obj;
    cout<<obj.strStr(haystack,needle)<<endl;

    
    return 0;
}