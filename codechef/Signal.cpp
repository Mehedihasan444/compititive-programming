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
        int flag = 0, cnt = 0;
        for (auto &&c : s)
        {
            if (c == '0')
                flag = 1;
            if (c == '1' && flag == 1)
                cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}