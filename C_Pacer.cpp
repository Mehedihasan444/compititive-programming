#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        long long m;
        cin >> n >> m;
        vector<pair<long long, int>> req(n);
        for (int i = 0; i < n; ++i)
            cin >> req[i].first >> req[i].second;

        long long ans = 0;
        long long prevT = 0;
        int prevSide = 0;

        for (auto &p : req)
        {
            long long time = p.first;
            int side = p.second;

            long long gap = time - prevT;
            int dist = abs(side - prevSide);

            if (gap < dist)
            {

                ans = 0;
            }

            if ((gap % 2) == (dist % 2))
                ans += gap;
            else
                ans += gap - 1;

            prevT = time;
            prevSide = side;
        }

        ans += (m - prevT);

        cout << ans << endl;
    }
    return 0;
}
