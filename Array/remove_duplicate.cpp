#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

// void remove_duplicate(int arr[], int n){
//     int temp[n];
//     temp[0] = arr[0];
//     int res = 1;
//     for(int i=1; i<n; i++){
//         if(temp[res-1] != arr[i]){
//             temp[res] = arr[i];
//             res++;
//         }
//     }

//     for(int i = 0; i<res; i++){
//         arr[i] = temp[i];
//     }

//     for (int i = 0; i < res; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

void removeDup(int arr[], int n){
    int res  = 1;
    for(int i=1; i<n; i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    for(int i=0; i<res; i++){
        cout<<arr[i]<<" ";
    }
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
    removeDup(arr,n);
    return 0;
}
