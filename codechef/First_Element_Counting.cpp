#include <bits/stdc++.h>
using namespace std;

long long midpoint(long long a, long long b)
{
    return (a + b) / 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<long long, int>> b;
        for (int i = 0; i < n; i++)
        {
            b.push_back({a[i], i});
        }
        sort(b.begin(), b.end());

        vector<long long> ans(n);

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ans[b[i].second] = -1;
            }
            else if (i == n - 1)
            {
                ans[b[i].second] = -1;
            }
            else
            {
                long long left = midpoint(b[i - 1].first, b[i].first);
                long long right = midpoint(b[i].first, b[i + 1].first);
                ans[b[i].second] = right - left;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
