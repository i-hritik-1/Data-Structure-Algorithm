#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int binarySearch(int arr[], int n, int target)
    {
        
        int start = 0, end = n-1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(arr[mid] <= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return end;
    }

    vector<int> countElementLessEqual(int arr1[], int arr2[], int m, int n)
    {
        vector<int> ans;
        sort(arr2,arr2+n);
        for(int i=0; i<m; i++)
        {
            int count = binarySearch(arr2,n,arr1[i]);
            ans.push_back(count+1);
        }
        return ans;
    }
};

int main()
{
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0; i<m; i++)
    {
        cin>>arr1[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }
    Solution obj;
    vector<int> ans = obj.countElementLessEqual(arr1,arr2,m,n);

    for(auto it:ans)
    {
        cout<<it<<" ";
    }

    
    return 0;
}