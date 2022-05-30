#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rightnext(int idx, vector<int> &nums)
    {
        int right = 0;
        for(int i = idx; i<nums.size(); i++)
        {
            if(nums[i] > nums[idx])
            {
                right = nums[i];
                break;
            }
        }
        return right;
    }

    int leftgreater(int idx, vector<int> &nums)
    {
        int left = 0;
        for(int i = 0; i<idx; i++)
        {
            if(nums[i] > nums[idx])
            {
                left = nums[i];
                break;
            }
        }
        return left;
    }

    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        set<int> s;
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }

        for(int i=0; i<nums.size(); i++)
        {
            int right = rightnext(i,nums);
            int left = leftgreater(i, nums);
            // cout<<right<<" "<<left<<endl;
            if(right)
            {
                ans.push_back(right);
            }
            else if(left)
            {
                ans.push_back(left);
            }
            else{
                ans.push_back(-1);
            }

        }
        return ans;
    }
};

int main()
{
    int n;
    cin>>n;
    
    vector<int> nums(n);

    for(int i=0;i<n; i++)
    {
        cin>>nums[i];
    }

    Solution obj;
    vector<int> res = obj.nextGreaterElements(nums);

    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
    return 0;
}