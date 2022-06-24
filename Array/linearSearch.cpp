#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[], int n, int k)
{
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == k)
        {
            flag = true;
            break;
        }
    }

    return flag;
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
    
    int k;
    cout<<"Enter element to be searched"<<endl;
    cin>>k;

    bool found = LinearSearch(arr,n,k);
    if(found == true)
    {
        cout<<"Element is present in the array."<<endl;
    }
    else{
        cout<<"Element is not present in the array."<<endl;
    }

    
    return 0;
}