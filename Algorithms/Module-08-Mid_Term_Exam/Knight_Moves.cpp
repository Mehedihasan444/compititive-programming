#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int lvl[105][105];
pair<int, int> parent[105][105];
int n, m;
vector<pair<int, int>> directions = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}};
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
        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + directions[i].first;
            int cj = par_j + directions[i].second;
            if (valid(ci, cj) == true && !vis[ci][cj])
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
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(grid, 0, sizeof(grid));
        int si, sj;
        cin >> si >> sj;
        int di, dj;
        cin >> di >> dj;
        memset(vis, false, sizeof(vis));
        memset(lvl, -1, sizeof(lvl));
        memset(parent, -1, sizeof(parent));
        bfs(si, sj);
        pair<int, int> node = {di, dj};
        vector<pair<int, int>> path;
        while (node.first != -1 && node.second != -1)
        {
            path.push_back(node);
            node = parent[node.first][node.second];
        }
        reverse(path.begin(), path.end());
        if (lvl[di][dj] == -1)
            cout << -1 << endl;
        else
            cout << lvl[di][dj] << endl;
    }

    return 0;
}