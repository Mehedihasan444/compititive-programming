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
        int e, o, c;
        c = n;
        for (int i = 1; i <= n - 1; i++)
        {

            if (i % 2 == 0)
            {
                e = c + (n - i);
                c = e;
            }
            else
            {
                o = c - (n - i);
                c = o;
            }
        }
        cout << c << "\n";
    }

    return 0;
}