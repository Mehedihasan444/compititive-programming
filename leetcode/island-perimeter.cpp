#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n, m, cnt = 0;
    bool vis[105][105];
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    bool valid(int i, int j) {
        if (i < 0 || j < 0 || i >= n || j >= m)
            return false;
        return true;
    }
    void dfs(int si, int sj, vector<vector<int>>& grid) {
        vis[si][sj] = true;
        for (int i = 0; i < 4; i++) {
            int ci = si + directions[i].first;
            int cj = sj + directions[i].second;
            if (!valid(ci, cj)) {
                cnt++;
            } else if (grid[ci][cj] == 0) {
                cnt++;
            } else if (!vis[ci][cj] && grid[ci][cj] == 1) {
                dfs(ci, cj, grid);
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
         n = grid.size();
         m = grid[0].size();
        cnt = 0;
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    dfs(i, j, grid);
                    return cnt;
                }
                }
            }

            return 0;
        }
    };