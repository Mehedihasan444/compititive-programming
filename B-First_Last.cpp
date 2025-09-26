#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<ll, pair<ll, ll>> idxs;

    for (ll i = 0; i < n; i++)
    {
        if (idxs.find(arr[i]) == idxs.end())
        {
            idxs[arr[i]] = {i + 1, i + 1};
        }
        else
        {
            idxs[arr[i]].second = i + 1;
        }
    }

    for (auto i : idxs)
    {
        cout << i.first << " " << i.second.first << " " << i.second.second << "\n";
    }

    return 0;
}
