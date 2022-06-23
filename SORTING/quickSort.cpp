#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void QuickSort(int arr[], int low, int high)
    {
        if(low<high)
        {
        int p = partition(arr,low,high);
        QuickSort(arr,low,p-1);
        QuickSort(arr,p+1,high);
        }
    }

    public:
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for(int j = low;  j<high; j++)
        {
            if(arr[j] < pivot)
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);

        return i+1;

    }

};

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Solution obj;
    obj.QuickSort(arr,0,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}