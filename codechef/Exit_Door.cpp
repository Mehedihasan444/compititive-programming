#include <bits/stdc++.h>
using namespace std;

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = n; i >= 1; i--)
        {
            int idx = find(a.begin(), a.end(), i) - a.begin();
            int l = idx;
            int r = a.size() - idx - 1;
            cnt += min(l, r);
            a.erase(a.begin() + idx);
        }

        cout << cnt << "\n";
    }

    return 0;
}
