#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> s,result;
        for(int i=0; i<nums1.size(); i++){
            s.insert(nums1[i]);
        }

        for(int i=0; i<nums2.size(); i++){
            int keys = nums2[i];
            if(s.find(keys) != s.end()){
               result.insert(keys);
            }
        }
        
        for(auto it : result){
            ans.push_back(it);
        }

        return ans;
    }
};

// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;
//         map<int,int> mp;
//         for(int i=0; i<nums1.size(); i++){
//             mp[nums1[i]]++;
//         }

//         for(int i=0; i<nums2.size(); i++){
//             if(mp[nums2[i]] > 0){
//                 mp[nums2[i]]--;
//                 ans.push_back(nums2[i]);
//             }
//         }
//         return ans;
//     }
// };

// class Solution{
//     public:
//     vector<int> intersect(vector<int> nums1, vector<int> nums2){
//         vector<int> ans;
//         for(int i=0; i<nums1.size(); i++){
//             for(int j=0; j<nums2.size(); j++){
//                 if(nums1[i] == nums2[j]){
//                     ans.push_back(nums2[j]);
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };


int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> nums1(n), nums2(m);

    for(int i=0; i<n; i++){
        cin>>nums1[i];
    }

    for(int i=0; i<m; i++){
        cin>>nums2[i];
    }

    Solution obj;
    vector<int> ans = obj.intersect(nums1,nums2);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}