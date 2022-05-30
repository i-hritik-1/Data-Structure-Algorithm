#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int linear_search(int arr[],int n,int element){
    bool flag = false;
    for(int i =0; i<n; i++){
        if(arr[i] == element){
            return i;
            flag = true;
            break;
        }
        else{
            flag = false;
        }
    }
    if(flag == false){
        return -1;
    }
}


void insertion(int arr[], int n, int pos, int element){
    for(int i= n; i>pos-1; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

void deletion(int arr[], int n, int element){
    int index = linear_search(arr,n,element);
    if(index == -1){
        cout<<"Element is not in the array"<<endl;
    }
    else{
        for(int i = index; i<n; i++){
            arr[i] = arr[i+1];
        }
    }
    n = n-1;
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    fastio
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }
    // insertion(arr,n+1,2,8);
    deletion(arr,n,2);

    return 0;
}
