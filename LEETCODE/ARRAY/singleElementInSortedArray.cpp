#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) { 
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int start = 0, end = nums.size() - 1;

        if(nums[0] != nums[1] || end == 0){
            return nums[0];
        }

        if(nums[end - 1] != nums[end - 2]){
            return nums[end-1];
        }

        while(start <= end){
            int mid = start + (end- start)/2;
            if((nums[mid] != nums[mid-1]) && (nums[mid] != nums[mid+1])){
                return mid;
            }
            
            if(((mid % 2 == 0) && (nums[mid] == nums[mid+1])) || ((mid %2 != 0) && (nums[mid] == nums[mid-1]))){
                    start = mid + 1;          
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    Solution obj;
    cout<<obj.singleNonDuplicate(v)<<endl;
    
    return 0;
}