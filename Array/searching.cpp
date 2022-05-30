#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    fastio
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i= 0; i<n; i++){
        cin>>v[i];
    }
    int key;
    cin>>key;
    bool flag = false;
    for(int i = 0; i<n; i++){
        if(v[i] == key){
            flag = true;
            cout<<"Element is found at the index "<<i;
            break;
        }
        else{
            flag = false;
        }
    } 
    if(flag == false){
        cout<<"Element not found in the array. "<<endl;
    }
    
    return 0;
}
