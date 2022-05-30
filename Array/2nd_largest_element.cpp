#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop for(int i=0; i<n; i++)

int largest(int arr[], int n){
    int large = 0;
    loop{
        if(arr[i] > arr[large]){
            large = i;
        }
    }
    return large;
}


int second_largest(int arr[], int n){
    int largeste = largest(arr,n);
    int res = -1;
    loop{
        if(arr[i] != arr[largeste]){
            if(res == -1){
                res = i;
            }
            else if(arr[i]>arr[res]){
                res =i;
            }
        }
        else{
            continue;
        }
    }
    return arr[res];
}

// int second_largest(int arr[], int n){
//     int res = -1;
//     int largest = 0;
//     loop{
//         if(arr[i]>arr[largest]){
//             res = largest;
//             largest = i;
//         }
//         else if(arr[i] != arr[largest]){
//             if(res ==-1 || arr[i]>arr[res]){
//                 res = i;
//             }
//         }
//     }
//     return res;
// }

int main()
{
    fastio
    int n;
    cin>>n;
    int arr[n];
    loop{
        cin>>arr[i];
    }
    cout<<second_largest(arr, n)<<endl;
    return 0;
}
