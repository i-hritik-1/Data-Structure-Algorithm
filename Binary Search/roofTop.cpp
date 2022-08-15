#include<bits/stdc++.h>
using namespace std;
/* 1 2 2 3 2
int prev = A[0];
for(int i=1; i<n; i++)
{
    if(A[i] > prev )
    {
        step++;
    }
    else
    {
        ans = max(ans,step);
        step = 0;
    }
    return ans;
}

*/
class Solution
{
    public:
    int maxStep(int A[], int N)
    {

        int prev = A[0];
        int ans = 0, step = 0;
        for(int i=1; i<N; i++)
        {
            if(A[i] > prev)
            {
                step++;
                prev = A[i];
                ans = max(ans,step);
            }
            else{
                // ans = max(ans,step);
                prev = A[i];
                step = 0;
            }
        }

        return ans;
    }
};

int main()
{
    int n;
    cin>>n;
    int A[n];

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    Solution obj;

    cout<<obj.maxStep(A,n)<<endl;
    


    
    return 0;
}