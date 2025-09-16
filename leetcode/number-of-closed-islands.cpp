#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool vis[105][105];
    vector<pair<int, int>>
        d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m, i = 0, closed_island_count = 0, flag = 0;
    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (!valid(ci, cj))
                flag = 0;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] == false && grid[i][j] == 0)
                {
                    flag = 1;
                    dfs(i, j, grid);
                    if (flag == 1)
                        closed_island_count++;
                }
            }
        }

        return closed_island_count;
    }
};