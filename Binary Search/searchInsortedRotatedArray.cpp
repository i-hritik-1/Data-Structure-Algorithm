#include<bits/stdc++.h>
using namespace std;

int FindPivot(int A[], int n)
{
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(A[mid] >= A[0])
        {
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return end;
}

int BinarySearch(int A[], int start, int end, int key)
{
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(A[mid] == key)
        {
            return mid;
        }
        else if(A[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int search(int nums[], int l, int h, int key){
       int pivot = FindPivot(nums,h);
       cout<<pivot<<endl;
       if(key == nums[pivot])
       {
        return pivot;
       }
       else if(key < nums[0] && key <= nums[h-1])
       {
        return BinarySearch(nums,pivot+1,h,key);
       }
       else
       {
        return BinarySearch(nums,0,pivot,key);
       }
    }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<search(arr,0,n,key)<<endl;
    
    return 0;
}