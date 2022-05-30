#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int freq = 1, i =1;
    while(i<n){
    while(i<n && v[i] == v[i-1]){
        freq++;
        i++;
    }
    cout<<v[i-1] <<" = "<<freq<<endl;
    i++;
    freq =1;
}
if(n==1 || v[n-1] != v[n-2]){
    cout<<v[n-1] <<" = "<<1<<endl;
}
    return 0;
}