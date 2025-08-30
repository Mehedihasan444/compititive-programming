#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int parent[1005];
bool cycle_detected = false;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto child : adj_list[par])
        {

            if (vis[child] && parent[par] != child)
            {
                cycle_detected = true;
            }
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
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
    memset(parent, -1, sizeof(parent));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }
    if (cycle_detected)
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}