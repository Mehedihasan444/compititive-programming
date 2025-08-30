#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int lvl[1005][1005];
pair<int, int> parent[1005][1005];
int n, m;
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    lvl[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + directions[i].first;
            int cj = par_j + directions[i].second;
            if (valid(ci, cj) == true && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                lvl[ci][cj] = lvl[par_i][par_j] + 1;
                parent[ci][cj] = par;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    int si = -1, sj = -1, di = -1, dj = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(lvl, -1, sizeof(lvl));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            parent[i][j] = {-1, -1};
    bfs(si, sj);
    pair<int, int> node = {di, dj};
    vector<pair<int, int>> path;
    while (node.first != -1 && node.second != -1)
    {
        path.push_back(node);
        node = parent[node.first][node.second];
    }
    for (auto pr : path)
    {
        if (grid[pr.first][pr.second] != 'R' && grid[pr.first][pr.second] != 'D')
            grid[pr.first][pr.second] = 'X';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}