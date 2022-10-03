#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // Base case
    if(n == 0)
    {
        return 1;
    }
    // Base case
    if(n == 1)
    {
        return 1;
    }

    // Factorial calculation
    int facto = n * factorial(n-1);
    return facto;
}

int main()
{
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
    
    return 0;
}