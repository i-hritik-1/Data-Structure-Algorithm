#include<bits/stdc++.h>
using namespace std;

// It is valid only for small number 0 - 40
// long long int fibbonacci(long long int n)
// {
//     // BASE CASE
//     if(n == 0)
//     {
//         return 0;
//     }

//     if(n == 1)
//     {
//         return 1;
//     }

//     return (fibbonacci(n-1) + fibbonacci(n-2)) % 1000000007;
// }



// Optimised
long long int fibbonacci(long long int n)
{
    // BASE CASE
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

   long long int prev1 = 0;
   long long int prev2 = 1;
   long long int sum = 0;

   for(int i = 2; i<n; i++)
   {
      sum = (prev1 + prev2) % 1000000007;
      prev1 = prev2;
      prev2 = sum;
   }

   return sum;
}

int main()
{
    long long int n;
    cin>>n;

    cout<<fibbonacci(n-1)<<endl;

    return 0;
}