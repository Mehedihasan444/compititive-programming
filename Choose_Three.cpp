#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int f = 0;
        for (int i = 0; i < n - 2; i++)
        {

            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == s)
                    {
                        cout << "YES" << endl;
                        // cout << a[i] << " " << a[j] << " " << a[k] << endl;
                        f = 1;
                        break;
                    }
                }
                if (f == 1)
                {
                    break;
                }
            }
            if (f == 1)
            {
                break;
            }
        }
        if (f == 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}