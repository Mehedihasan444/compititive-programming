#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, q;
    cin >> n >> q;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        for ( int i = l-1; i < r; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}