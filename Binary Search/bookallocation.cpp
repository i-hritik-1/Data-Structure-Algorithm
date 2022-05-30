#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPossible(vector<int> &books, int n, int m, int mid)
    {
        int pageSum = 0, studentCount = 0;
        for(int i =0; i<n; i++)
        {
            if(pageSum + books[i] <= mid)
            {
                pageSum += books[i];
            }
            else
            {
                studentCount++;
                if(studentCount > m || books[i] > mid)
                {
                    return false;
                }
                pageSum = books[i];
            }
        }
        return true;
    }

    int booksAllocated(vector<int> &books, int m)
    {
        int n = books.size();
        int sum = 0;
        for(int i=0; i<books.size(); i++)
        {
            sum += books[i];
        }

        int start = 0, end = sum;
        int ans = -1;
        int mid = start + (end - start)/2;
        while(start <= end)
        {
            if(isPossible(books,n,m,mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> books(n);
    for(int i=0; i<n; i++)
    {
        cin>>books[i];
    }
    int m;
    cin>>m;
    Solution obj;
    cout<<obj.booksAllocated(books,m)<<endl;
    
    return 0;
}