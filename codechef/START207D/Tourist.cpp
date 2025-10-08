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
        int n, a, b;
        cin >> n >> a >> b;
        int min = INT_MAX;
        int d = NULL;
        for (int i = 0; i < n; i++)
        {
            int xi, yi;
            cin >> xi >> yi;
            d = abs(a - xi) + abs(b - yi);
            if (d < min)
                min = d;
        }
        if (d == 0)
            cout << 0 << "\n";
        else
        {
            cout << min << "\n";
        }
    }

    return 0;
}