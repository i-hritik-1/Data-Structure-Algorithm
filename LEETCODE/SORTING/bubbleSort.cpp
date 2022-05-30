#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> bubbleSort(vector<int> &nums){
        for(int i=0; i<nums.size()-1; i++){
            bool swapped = false;
            for(int j=0; j<nums.size()-i-1; j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j], nums[j+1]);
                    swapped =  true;
                }
            }
            if(swapped ==  false){
                break;
            }

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
    vector<int> ans = obj.bubbleSort(v);

    for(int i=0; i<n; i++){
        cout<<ans[i] <<" ";
    }

    
    return 0;
}