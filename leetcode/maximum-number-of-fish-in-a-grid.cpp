#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool vis[105][105];
    vector<pair<int, int>>
        d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m, i = 0, max_fishes = 0, flag = 0;
    vector<int> fish_counts;
    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        max_fishes += grid[si][sj];
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != 0)
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int findMaxFish(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] == false && grid[i][j] != 0)
                {

                    dfs(i, j, grid);
                    fish_counts.push_back(max_fishes);
                    max_fishes = 0;

                }
            }
        }

        return !fish_counts.empty()?*max_element(fish_counts.begin(), fish_counts.end()):0;
    }
};