#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> selectionSort(vector<int> &nums ){
        // int n = nums.size();
        // vector<int> temp(n);
        // for(int i=0; i<nums.size(); i++){
        //     int minIndex = 0;
        //     for(int j= 1; j<nums.size(); j++){
        //         if(nums[minIndex] > nums[j]){
        //             minIndex = j;     
        //         } 
        //     }
        //     temp[i] = nums[minIndex];
        //     nums[minIndex] = INT_MAX;
        // }

        // for(int i =0; i<temp.size(); i++){
        //     nums[i] = temp[i];
        // }

        // return nums;

        for(int i=0; i<nums.size(); i++){
            int minIndex = i;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] < nums[minIndex]){
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
        return nums;
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
    vector<int> ans = obj.selectionSort(v);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}