#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool palindrome(string s){
        int start = 0, end = s.length()-1;
        while(start <= end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.palindrome(s)<<endl;
    return 0;
}