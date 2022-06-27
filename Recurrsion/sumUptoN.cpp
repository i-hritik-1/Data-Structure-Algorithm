
// Write a recursive function that finds the sumof natural
// numbers till n.
#include <bits/stdc++.h>
using namespace std;

void sum(int n,int add)
{
    if(n == 0)
    {
        cout<<add<<endl;
        return;
    }
    add = add + n;
    sum(n-1,add);
}

int main()
{
    int n;
    cin >> n;
    int add = 0;
    sum(n,add);
    return 0;
}
/*
                               5 -> 5+ 0 = 5;
                             4 -> 5 + 4 = 9;
                           3 -> 9 + 3 = 12;
                         2 -> 12 + 2 = 14;
                       1 -> 14 + 1 = 15;

*/     