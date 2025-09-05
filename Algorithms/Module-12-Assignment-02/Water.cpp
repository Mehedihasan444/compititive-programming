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
        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            temp[i] = h[i];
        }
        sort(temp, temp + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (h[i] == temp[0] || h[i] == temp[1])
            {

                cout << i << " " ;
            }
        }
        cout << endl;
    }

    return 0;
}