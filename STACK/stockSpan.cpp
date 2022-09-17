#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> stockSpan(vector<int> arr)
    {
        vector<int> ans;
        stack<pair<int,int>> st;

        if(st.size() == 0)
        {
            ans.push_back(-1);
        }

        for(int i=0; i<arr.size(); i++)
        {
            if(st.top().first > arr[i])
            {
                ans.push_back(st.top().second);
            }
            else if(st.top().first <= arr[i])
            {
                while(st.size() == 0 || st.top().first > arr[i])
                {
                    st.pop();
                }

                if(st.size() == 0)
                {
                    ans.push_back(0);
                }
                else{
                    ans.push_back(st.top().second);
                }
            }
            st.push({arr[i],i});
            
        }
        for(int i=0; i<arr.size(); i++)
        {
            ans[i] = i - ans[i];
        }

        return ans;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    Solution obj;
    vector<int> res = obj.stockSpan(arr);

    for(auto it: res)
    {
        cout<<it<<" ";
    }
    cout<<endl;


    
    return 0;
}