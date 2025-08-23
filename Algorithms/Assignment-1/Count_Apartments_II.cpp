#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<int> apartment_sizes;
int n, m, c = 0;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    c++;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == false && grid[i][j] == '.')
            {
                dfs(i, j);
                apartment_sizes.push_back(c);
                c = 0;
            }
        }
    }
    int l = apartment_sizes.size();
    if (apartment_sizes.empty())
    {
        cout << 0 << endl;
        return 0;
    }

    sort(apartment_sizes.begin(), apartment_sizes.end());
    for (int i = 0; i < l; i++)
    {

        cout << apartment_sizes[i] << " ";
    }
    cout << endl;
    return 0;
}