#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, si=NULL;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && !f)
            {
                f = true;
                si = i;
            }
            else if (s[i] == '1' && f)
            {
                cnt += (i - si) - 1;
                si=i;
            }
        }
        cout << cnt << "\n";

    }

    return 0;
}