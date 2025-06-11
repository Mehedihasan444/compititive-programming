#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long tents = a + b / 3;
        long long rem = b % 3;

        if (rem != 0)
        {
            long long need = 3 - rem;
            if (c < need)
            {
                cout << -1 << endl;
                continue;
            }
            c -= need;
            tents += 1;
        }

        tents += (c + 2) / 3;

        cout << tents << endl;
    }
    return 0;
}
