#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> left_rotate(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i =0; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    return arr;
}

int main()
{
    fastio
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr = left_rotate(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}

// 1 2 3 4 5
// 5 1 2 3 4
