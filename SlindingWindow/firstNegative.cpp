#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> firstNegative(vector<int> &nums, int k)
    {
        int n = nums.size();
        queue<int> li;
        vector<int> ans;
        int i =0,  j = 0;
        while(j < n)
        {
            if(nums[j] < 0)
            {
                li.push(nums[j]);
            }

            if(j-i+1 < k)
            {
                j++;
            }
            else
            {
                if(li.size() == 0)
                {
                    ans.push_back(0);
                }
                else{
                    ans.push_back(li.front());
                }
                
                if(nums[i] == li.front())
                {
                    li.pop();
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
    vector<int> v(n);
    for(int i=0;i<n; i++)
    {
        cin>>v[i];
    }

    Solution obj;
    vector<int> ans = obj.firstNegative(v,k);

    for(auto it : ans)
    {
        cout<<it<<" ";
    }

    
    return 0;
}