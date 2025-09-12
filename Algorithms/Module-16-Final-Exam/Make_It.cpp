#include <bits/stdc++.h>
using namespace std;
int dp[100001];
bool reachValue(int start, int n)
{
    if (start == n)
        return true;
    if (start > n)
        return false;
    if (dp[start] != -1)
        return dp[start];
    bool op1 = reachValue(start + 3, n);
    bool op2 = reachValue(start * 2, n);

    dp[start] = (op1 || op2);
    return dp[start];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        int n;
        cin >> n;
        bool res = reachValue(1, n);
        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}