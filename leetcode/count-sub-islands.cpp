#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool vis[1005][1005];
    vector<pair<int, int>>
        d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m, i = 0, sub_island_count = 0, flag = 0;
    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }
    void dfs(int si, int sj, vector<vector<int>> &grid1 ,vector<vector<int>> &grid2 )
    {
        vis[si][sj] = true;
        if (grid1[si][sj] == 0)
            flag = 0;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
            {
                dfs(ci, cj, grid1,grid2);
            }
        }
    }
    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        n = grid1.size();
        m = grid1[0].size();
        memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] == false && grid2[i][j] == 1)
                {
                    flag=1;
                    dfs(i, j,grid1, grid2);
                    if(flag==1)
                    sub_island_count++;
                }
            }
        }

        return sub_island_count;
    }
};