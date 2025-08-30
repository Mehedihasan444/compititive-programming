#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
bool pathvis[1005];
bool cycle_detected = false;

void dfs(int src)
{
    vis[src] = true;
    pathvis[src] = true;
    for (auto child : adj_list[src])
    {

        if (vis[child] && pathvis[child])
        {
            cycle_detected = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    pathvis[src] = false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(pathvis, false, sizeof(pathvis));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (cycle_detected)
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}