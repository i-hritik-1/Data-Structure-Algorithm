#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
    int m = nums1.size();
    int n = nums2.size();

    for(int i=0; i<n; i++){
         nums1.push_back(nums2[i]);
    }

    sort(nums1.begin(), nums1.end());
        
    int len = nums1.size();
    double median = 0;

    if(len % 2 != 0){
       median = (double)(nums1[len/2]);
    }
    else{
        median = (double)((nums1[(len/2) -1] + nums1[len/2])/2.0);
    }
       return median;
    }
};



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
    cout<<obj.findMedianSortedArrays(nums1,nums2);
    return 0;
}
