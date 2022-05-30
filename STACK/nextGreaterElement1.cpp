#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        stack<int> s;

        for(int i=nums2.size()-1; i>=0; i--)
        {
            if(s.size() == 0)
            {
                mp[nums2[i]] = -1;
            }
            else if(s.size()>0 && s.top() > nums2[i])
            {
                mp[nums2[i]] = s.top();
            }
            else if(s.size() > 0  && s.top() < nums2[i])
            {
                while(s.size() > 0 && s.top() < nums2[i])
                {
                    s.pop();
                }

                if(s.size() == 0)
                {
                    mp[nums2[i]] = -1;
                }
                else{
                    mp[nums2[i]] = s.top();
                }
            }
            s.push(nums2[i]);
        }

        for(int i=0; i<nums1.size(); i++)
        {
            for(auto it: mp)
            {
                if(nums1[i] == it.first)
                {
                    ans.push_back(it.second);
                }
            }
        }
        return ans;
        
    }
};

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> nums1(n),nums2(m);

    for(int i=0; i<n;i++)
    {
        cin>>nums1[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>nums2[i];
    }

    Solution obj;
    vector<int> res = obj.nextGreaterElement(nums1, nums2);

    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}