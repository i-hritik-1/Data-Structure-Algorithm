#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

class Searching{
    public:
    void linear_search(vector<int> v, int n){
        int key;
        cout<<"Enter the element to be searched: ";
        cin>>key;
        bool flag = false;
        for(int i=0; i<n;i++){
            if(v[i] == key){
                cout<<"Element is found at the index "<<i<<endl;
                flag = true;
                break;
            }
            else{
                flag = false;
            }
        }
        if(flag == false){
            cout<<"Element is not found in the array."<<endl;
        }
    }

    void binary_search(vector<int> v, int n){
        int key;
        cout << "Enter the element to be searched: ";
        cin >> key;
        
    }
};

int main()
{
    fastio
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    return 0;
}
