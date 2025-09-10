#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> items;
vector<vector<int>> dp(1001, vector<int>(1001, -1));
int knapsack(int i, int w)
{
    if (i < 0 || w <= 0)
        return 0;
    if (items[i].first <= w)
    {
        if (dp[i][w] != -1)
            return dp[i][w];
        int take = knapsack(i - 1, w - items[i].first) + items[i].second;
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
    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++)
    {
        int wi, vi;
        cin >> wi >> vi;
        items.push_back({wi, vi});
    }
    cout << knapsack(n - 1, w) << endl;
    return 0;
}