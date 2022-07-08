// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n][n];
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << a[j][i] << " ";
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n){
    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            v[j][i] = a[i][j];
        }
    }
    return v;

}

int main(){
    int t;
    cin>>t;
    int a[M][M];
    while(t--){
        int n;
        cin>>n;
        for(int i =0; i<n; i++){
            for(int j =0; j<n ;j++){
                cin>>a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a,n);
        for(int i = 0; i<n;i++){
            for(int j=0; j<n; j++){
                cout<<b[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
