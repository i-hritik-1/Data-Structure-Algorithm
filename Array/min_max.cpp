#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    fastio
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max =arr[i];
        }
    }
    pair<int, int> p;
    p.first = min;
    p.second = max;
    cout<<p.first<<"  "<<p.second<<endl;
    return 0;
}
