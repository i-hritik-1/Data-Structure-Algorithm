#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    fastio
    int n;
    cin>>n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag;
    for(int i=0; i<n; i++){
        flag = false;
        for(int j = i+1; j<n; i++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << "Array is distinct. " << endl;
        }
        else
        {
            cout << "Array is not distinct. " << endl;
        }
    }

    
    return 0;
}
