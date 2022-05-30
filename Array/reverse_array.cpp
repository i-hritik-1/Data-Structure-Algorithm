#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop for (int i = 0; i < n; i++)

void reverse(int arr[], int n){
    int low = 2, high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    fastio
    int n;
    cin>>n;
    int arr[n];
    loop{
        cin>>arr[i];
    }
    reverse(arr,n);
    return 0;
}
