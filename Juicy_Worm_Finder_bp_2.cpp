#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int m;
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    int s = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s += w[j];
            if (q[i] <= s)
            {
                cout<< j + 1 << endl;
                s = 0;
                break;
            }
        }
    }

    return 0;
}