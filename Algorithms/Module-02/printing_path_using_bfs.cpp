#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int lvl[1005];
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lvl[src] = 0;
    // parent[src] = -1;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (auto child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                lvl[child] = lvl[par] + 1;
                parent[child] = par;
            }
        }
    }
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
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(lvl, -1, sizeof(lvl));
    memset(parent, -1, sizeof(parent));
    int src, dst;
    cin >> src >> dst;
    bfs(src);
    int node = dst;
    vector<int> path;
    while (node != -1)
    {
        // cout<<node<<" ";
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (auto x : path)
    {
        cout << x << " ";
    }

    return 0;
}