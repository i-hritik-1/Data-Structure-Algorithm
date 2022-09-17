#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[3] = {5,4,3},arr2[4] = {5,4,3,2},arr3[5] = {5,4,3,2,1};

    int sum1 =0, sum2 = 0, sum3 = 0;

    for(int i=0; i<3; i++)
    {
        sum1 += arr1[i];
    }

    for(int i=0; i<4; i++)
    {
        sum2 += arr2[i];
    }

    for(int i=0; i<5; i++)
    {
        sum3 += arr3[i];
    }

    cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    cout<<min(sum1,min(sum2,sum3))<<endl;
    return 0;
}