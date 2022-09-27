#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // Copy value
    int mainIdx = s;

    for(int i = 0; i<len1; i++)
    {
        arr1[i] = arr[mainIdx++];
    }

    // mainIdx = mid + 1;
    for(int i=0; i<len2; i++)
    {
        arr2[i] = arr[mainIdx++];
    }

    // Merge two array

    mainIdx = s;

    int idx1 = 0;
    int idx2 = 0;

    while(idx1 < len1 && idx2 < len2)
    {
        if(arr1[idx1] < arr2[idx2])
        {
            arr[mainIdx++] = arr1[idx1++];
        }
        else
        {
            arr[mainIdx++] = arr2[idx2];
        }
    }

    while(idx1 < len1)
    {
        arr[mainIdx++] = arr1[idx1++];
    }

    while(idx2 < len2)
    {
        arr[mainIdx++] = arr2[idx2++];
    }


}

void mergeSort(int *arr, int s, int e)
{
    if(s >= e)
    {
        return;
    }

    int mid = s + (e - s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i]; 
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;

    mergeSort(arr,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i] <<" ";
    }

    return 0;
}