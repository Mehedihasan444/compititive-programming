#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> arr(n);
    vector<long long int> prefixSum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefixSum[i] = (i == 0 ? arr[i] : arr[i] + prefixSum[i - 1]);
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        long long int s = (l == 1 ? prefixSum[r - 1] : prefixSum[r - 1] - prefixSum[l - 2]);
        // for (int j = l - 1; j < r; j++)
        // {
        //     s += arr[j];
        // }
        cout << s << endl;
    }

    return 0;
}