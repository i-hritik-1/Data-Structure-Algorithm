#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> nextSmallestLeft(vector<int> &nums)
    {
        vector<int> ans;
        stack<int>s;
        for(int i=0; i<nums.size(); i++)
        {
            if(s.size() == 0)
            {
                ans.push_back(-1);
            }
            else if(s.size() > 0 && s.top() < nums[i])
            {
                ans.push_back(s.top());
            }
            else if(s.size()>0 && s.top() > nums[i])
            {
                while(s.size() > 0 && s.top() > nums[i])
                {
                    s.pop();
                }

                if(s.size() == 0)
                {
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(s.top());
                }
            }
            s.push(nums[i]);

        }

        return ans;
    }

};

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;  i<n; i++)
    {
        cin>>nums[i];
    }
    
    Solution obj;
    vector<int> res = obj.nextSmallestLeft(nums);

    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}