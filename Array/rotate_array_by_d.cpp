#include<iostream>
#include<vector>
using namespace std;

//  Approach 1.
// vector<int> rotate_array1(vector<int> &v, int n){
//      int temp = v[0];
//      for(int i=0; i<n; i++){
//          v[i] = v[i+1];
//      }
//      v[n-1] = temp;
//      return v;
// }

// void rotate_array(vector<int> &arr, int n, int d){
//     for(int i =0; i<d; i++){
//        arr = rotate_array1(arr,n);
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Approach 2

// void rotate_array(vector<int> &v, int n, int d){
//     vector<int> temp(d);
//     for(int i=0; i<d; i++){
//         temp[i] = v[i];
//     }
//     for(int i=d; i<n; i++){
//         v[i-d] = v[i];
//     }
//     for(int i=0; i<n; i++){
//         v[n-d+i] = temp[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
// }

//  Approach 3
void reverse(int arr[], int start, int end ){
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate_array(int arr[], int n, int k){
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotate_array(arr,n,k);
    return 0;
}
