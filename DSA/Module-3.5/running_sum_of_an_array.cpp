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
    vector<int> running_sum(n);
    for (int i = 0; i < n; i++)
    {
        running_sum[i] = (i == 0 ? arr[i] : arr[i] + running_sum[i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << running_sum[i] << " ";
    }
    return 0;
}