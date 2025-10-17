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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max_avg = INT_MIN;
        if (n == 1)
        {
            max_avg = a[0];
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    int sum = 0;
                    for (int k = i; k <= j; k++)
                    {
                        sum += a[k];
                    }
                    int avg = sum / (j - i + 1);
                    max_avg = max(max_avg, avg);
                }
            }
        }
        cout << max_avg << "\n";
    }

    return 0;
}