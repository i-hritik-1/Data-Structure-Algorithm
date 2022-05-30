#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        int i=0, j=0;
        deque<int> dq;
        while(i<n && j<n)
        {
            while(!dq.empty() && arr[j] > dq.back())
            {
                dq.pop_back();
            }
            dq.push_back(arr[j]);

            if((j-i+1) < k)
            {
                j++;
            }
            else
            {
                ans.push_back(dq.front());
                if(dq.front() == arr[i])
                {
                    dq.pop_front();
                }
                i++;
                j++;
            }

        }
        return ans;
    }
};

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int nums[n];
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    
    Solution obj;
    vector<int> res = obj.max_of_subarrays(nums,n,k);

    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}