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
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (long long int i = 0; i + 1 < n; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                cnt0++;
            }
            if (s[i] == '1' && s[i + 1] == '1')
            {
                cnt1++;
            }
        }
        if (cnt1 >= cnt0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << (cnt0 - cnt1 + 1) / 2 << "\n";
        }
    }

    return 0;
}
