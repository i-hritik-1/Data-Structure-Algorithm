#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int start = 0, end = height.size()-1;
        while(start < end){
            if(height[start] < height[end]){
                maxWater = max(maxWater, (height[start]*(end - start)));
                start++;
            }
            else if(height[start] > height[end]){
                maxWater = max(maxWater, (height[end]*(end - start)));
                end--;
            }
            else{
                maxWater = max(maxWater,(height[start]*(end-start)));
                start++;
                end--;
            }
        }
        return maxWater;
    }
};
// [1,8,6,2,5,4,8,3,7]

int main()
{
    int n;
    
    cin>>n;
    vector<int> height(n);
    for(int i=0; i<n; i++){
        cin>>height[i];
    }
    Solution obj;
    cout<<obj.maxArea(height)<<endl;


    return 0;
}

// NAIVE SOLUTION
 // for(int i=0; i<height.size(); i++){
        //     for(int j=1; j<height.size(); j++){
        //         if(height[i] < height[j]){
        //             maxWater = max(maxWater, (height[i]*(j-i)));
        //         }
        //         else{
        //             maxWater = max(maxWater, (height[j]*(j-i)));
        //         }
        //     }
        // }
        // return maxWater;
