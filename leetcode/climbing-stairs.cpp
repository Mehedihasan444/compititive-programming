#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dp[50];
    Solution() { memset(dp, -1, sizeof(dp)); }
    int climbStairs(int n)
    {
        if (n < 3)
        {
            return n;
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }
        dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return dp[n];
    }
};
int main()
{
    int n;
    cin >> n;
    Solution sol;
    int res = sol.climbStairs(n);
    cout << res << endl;
    return 0;
}