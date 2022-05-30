#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void maxDiff(vector<int> &arr){
        int n = arr.size();
        int diff = INT_MIN;
        // for(int i=0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         diff = max(diff, (arr[j] - arr[i]));
        //     }
        // }
        int mini = arr[0];
        for(int i=1; i<n; i++){
            diff = max(diff,(arr[i] - mini));
            mini = min(mini, arr[i]);
        }
        cout<<diff<<endl;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n;  i++){
        cin>>arr[i];
    }
    Solution obj;
    obj.maxDiff(arr);
    return 0;
}