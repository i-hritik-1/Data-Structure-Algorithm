#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> prices(n);

    for(int i=0; i<n; i++){
        cin>>prices[i];
    }

    int profit = 0;
    int minele = prices[0];
    // for(int i=1; i<n; i++){
    //     int prev = 0;
    //     minele = min(minele, prices[i]);
    //     if(prices[i] > minele && i>prev ){
    //         profit = max(profit, (prices[i] - minele));
    //     }
    //     prev++;
    // }

    // for(int i = 1; i<n; i++){
    //     int curr_ele = prices[i-1];
    //     if(prices[i] > curr_ele){
    //         int diff = prices[i] - curr_ele;
    //         profit += diff;
    //     }
    // }
    
    
    cout<<profit<<endl;

    return 0;
}