#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int> ans;
        map<int,int> s;
        for(int i=0; i<k; i++)
        {
           s[A[i]]++;
        }

        int j = 0;
        for(int i=k; i<=n; i++)
        {
            ans.push_back(s.size());
            s[A[i]]--;
            if(s[A[j]] == 0)
            {
                s.erase(A[j]);
            }
            j++;
            s[A[i]]++;
        }
        
        return ans;
        //code here.
    }
};

int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    Solution obj;
    vector<int> res = obj.countDistinct(arr,n,k);

    for(auto it: res)
    {
        cout<<it<<" ";
    }    
    return 0;
}
