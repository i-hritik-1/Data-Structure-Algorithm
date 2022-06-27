#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
     
     void juggler(int N, vector<int> &ans)
     {
        if(N==1)
        {
            ans.push_back(1);
            return;
        }

        ans.push_back(N);

        if(N%2 == 0)
        {
            N = pow(N,0.5);
            juggler(N,ans);
        }
        else
        {
            N = pow(N,1.5);
            juggler(N,ans);
        }
     }

    vector<int> jugglerSequence(int N){
        vector<int> ans;
        juggler(N,ans);

        return ans;

        // code here
    }
};

int main()
{
    int n;
    cin>>n;
    Solution obj;
    vector<int> ans = obj.jugglerSequence(n);

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    
    return 0;
}