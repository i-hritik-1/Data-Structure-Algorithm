#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(vector<int> &nums1, vector<int> &nums2){
        int i = 0, j =0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        while(i<n && i<m){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }

        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }

        for(auto it : ans){
            cout<<it<<" ";
        }
    }
};


int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> nums1(n);
    vector<int> nums2(m);

    for(int i=0; i<n; i++){
        cin>>nums1[i];
    }

    for(int i=0; i<n; i++){
        cin>>nums2[i];
    }

    Solution obj;
    obj.merge(nums1,nums2);


    return 0;
}