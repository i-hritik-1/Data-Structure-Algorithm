#include<bits/stdc++.h>
using namespace std;

int *insertionSort(int *arr, int n)
{
    for(int i= 1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        for(; j >= 0; j--)
        {
            if(arr[j] > key)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = key;
    }

    return arr;
}

// 20 18 13 76 25 11 1


int main()
{
    int n;
    cin>>n;

    int *arr  = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int *ans = insertionSort(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}