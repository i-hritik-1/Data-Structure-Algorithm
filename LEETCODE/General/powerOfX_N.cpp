// 50 power of x,n -> x^n

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double power = 1;
        double negativePower = 1;
        if(n>0)
        {
            for(int i=0; i<n; i++)
            {
                power = power * x;
            }
        }
        else
        {
            for(int i=0; i<abs(n); i++)
            {
                power = power*x;
            }

            power = 1/power;
        }
        return power;
    }
};

int main()
{
    double x;
    int n;
    cin>>x>>n;

    Solution obj;
    cout<<obj.myPow(x,n)<<endl;
    return 0;
}