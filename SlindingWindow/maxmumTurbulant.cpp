// 978

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
     bool iscurrentTurbulent(vector<int>&arr, int j)
     {
        return ((arr[j]>arr[j-1] && arr[j] > arr[j+1]) ||( arr[j]<arr[j-1] && arr[j]<arr[j+1]));
     }
    int maxTurbulenceSize(vector<int>& arr) {
       int i = 0, j = 0;
       int len = arr.size();
       int maxi = INT_MIN;
       int count = 0;
       while(i+1 < len)
       {
        if(arr[i] == arr[i+1])
        {
            i++;
            count++;
            continue;
        }
        j = i  + 1;
        while(j+1 < len && iscurrentTurbulent(arr,j))
        {
            j++;
        }
        maxi = max(maxi,j-i+1);
        i = j;
       }

       if(count == len-1)
       {
        return 1;
       }

       return maxi;
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
    cout<<obj.maxTurbulenceSize(arr)<<endl;

    
    return 0;
}