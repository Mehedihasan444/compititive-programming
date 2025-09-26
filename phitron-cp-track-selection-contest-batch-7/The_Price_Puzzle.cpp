#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> costs(n);
    ll costsSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> costs[i];
        costsSum += costs[i];
    }

    vector<bool> dp(costsSum + 1, false);
    dp[0] = true;

    for (int p : costs)
    {
        for (int s = costsSum; s >= p; s--)
        {
            if (dp[s - p])
            {
                dp[s] = true;
            }
        }
    }

    vector<ll> sums;
    for (ll s = 0; s <= costsSum; s++)
    {
        if (dp[s])
            sums.push_back(s);
    }

    int q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        auto lb = lower_bound(sums.begin(), sums.end(), l);
        auto up = upper_bound(sums.begin(), sums.end(), r);
        cout << (up - lb) << "\n";
    }

    return 0;
}
