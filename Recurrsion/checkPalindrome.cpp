#include<bits/stdc++.h>
using namespace std;

bool checkPalinrome(string s, int start, int end)
{
    if(start >= end)
    {
        return true;
    }

    if(s[start] != s[end])
    {
        return false;
    }
    return checkPalinrome(s,start+1,end-1);
}

int main()
{
    string s;
    cin>>s;
    cout<<checkPalinrome(s,0,s.size()-1);
    return 0;
}