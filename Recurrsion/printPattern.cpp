#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void printPattern(int N, vector<int> &ans)
    {
        if(N <= 0)
        {
            ans.push_back(N);
            return;
        }
        ans.push_back(N);
        printPattern(N-5,ans);
        ans.push_back(N);

    }

    vector<int> pattern(int N){
        vector<int> ans;
        printPattern(N,ans);
        return ans;
        // code here
    }
};

int main()
{
    int n;
    cin>>n;
    Solution obj;
    vector<int> ans = obj.pattern(n);

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    
    return 0;
}