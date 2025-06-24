#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> prefix_sum(n);
    for (int i = 0; i < n; i++)
    {
        prefix_sum[i] = (i == 0 ? arr[i] : arr[i] + prefix_sum[i - 1]);
    }
    for (int i = 1; i < n-1; i++)
    {
        if (prefix_sum[i-1]==prefix_sum[n-1]-prefix_sum[i])
        {
           cout << i << endl;   
           break;
        }
        
    }
    
    return 0;
}