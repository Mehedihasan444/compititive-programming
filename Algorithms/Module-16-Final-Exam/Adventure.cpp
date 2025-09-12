#include <bits/stdc++.h>
using namespace std;
vector<int> weights(1001);
vector<int> values(1001);
vector<vector<int>> dp(1001, vector<int>(1001, -1));
int knapsack(int i, int w)
{
    if (i < 0 || w <= 0)
        return 0;
    if (weights[i] <= w)
    {
        if (dp[i][w] != -1)
            return dp[i][w];
        int take = knapsack(i - 1, w - weights[i]) + values[i];
        int notTake = knapsack(i - 1, w);
        dp[i][w] = max(take, notTake);
        return dp[i][w];
    }
    else
    {
        dp[i][w] = knapsack(i - 1, w);
        return dp[i][w];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        for (int i = 0; i < n; i++)
        {
            int wi;
            cin >> wi;
            weights[i] = wi;
        }
        for (int i = 0; i < n; i++)
        {
            int vi;
            cin >> vi;
            values[i] = vi;
        }
        cout << knapsack(n - 1, w) << endl;
        dp.assign(1001, vector<int>(1001, -1));
    }
    return 0;
}