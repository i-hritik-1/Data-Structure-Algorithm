#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i= 1; i<n; i++)
    {
        bool swapped = false;
        for(int j = 0; j<n-i; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swapped = true;
                swap(nums[j],nums[j+1]);
            }
            
        }
        if(swapped == false)
        {
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}