#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int largest_element(int arr[], int n){
    int index = 0;
    int large = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] >= large){
            large = arr[i];
            index = i;
        }
    }
    return large;
}

int main()
{
    fastio
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<largest_element(arr, n)<<endl;
    return 0;
}
