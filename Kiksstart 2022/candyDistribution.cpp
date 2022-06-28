#include<bits/stdc++.h>
using namespace std;

void solution(int case_num)
{
    int N,M;
    cin>>N>>M;
    int arr[N];
    int sum = 0;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }

    cout<<"Case #"<<case_num<<": "<<sum%M<<endl;

}
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        solution(i);
    }
    
    return 0;
}