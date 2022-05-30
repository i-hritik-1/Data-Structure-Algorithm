#include<iostream>
#include<vector>
using namespace std;

// Approach 1
void leader(vector<int> &v, int n){
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j = i+1; j<n; j++){
            if(v[j]>=v[i]){
                flag = false;
                break;
            }
        }
        if(flag == true){
        cout<<v[i]<<" ";
        }
    }
}



int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    leader(v,n);

    // for(int i=0; i<n; i++){
    //     bool flag = true;
    //     for(int j=i+1; j<n; j++){
    //         if(v[i] <= v[j]){
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if(flag == true){
    //         cout<<v[i]<<" ";
    //     }
    // }

    return 0;
}