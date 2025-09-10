#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<char> str(n);
        vector<int> fr(7, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            fr[str[i] - 'A']++;
        }
        int cnt = 0;
        for (int i = 0; i < 7; i++)
        {
            if (fr[i] == 0)
            {
                cnt += m;
            }
            else if (fr[i] < m)
            {
                cnt += m - fr[i];
            }
        }
        cout << cnt << endl;
    }

    return 0;
}