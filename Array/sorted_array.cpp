#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop for (int i = 0; i < n; i++)
int main()
{
    fastio int n;
    cin >> n;
    int arr[n];
    loop
    {
        cin >> arr[i];
    }
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Array is sorted. " << endl;
    }
    else
    {
        cout << "Array is unsorted. " << endl;
    }
    return 0;
}
