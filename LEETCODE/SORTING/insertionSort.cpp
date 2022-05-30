// Best sorting algorithm for short  array.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> insertionSort(vector<int> &nums){
        int n = nums.size();
        for(int i=1; i<n; i++){
            int key = nums[i];
            int j = i-1;
            while(j>= 0 && nums[j] > key){  // 20 10 40 50 30 60-> 10 20 40 50 30 60
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;
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
    vector<int> ans = obj.insertionSort(v);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}