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
        int pivot = arr[low];
        int count = 0;
        for(int j = low + 1;  j <= high; j++)
        {
            if(arr[j] <= pivot)
            {
                count++;
            }
        }

        int pivotIdx = low + count;
        swap(arr[pivotIdx],arr[low]);

        
        int i = low, j = high;
        while(i < pivotIdx && j > pivotIdx)
        {
            while(arr[i] < pivot)
            {
                i++;
            }

            while(arr[j] > pivot)
            {
                j--;
            }
            if(i<pivotIdx && j > pivotIdx)
            {
                swap(arr[i++],arr[j--]);
            }
        }
        return pivotIdx;
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