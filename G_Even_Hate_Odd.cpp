#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int o = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            if (e == o)
            {
                cout << "0" << endl;
            }
            else
            {
                int temp = max(e, o);
                cout << temp - n / 2 << endl;
            }
        }
    }

    return 0;
}