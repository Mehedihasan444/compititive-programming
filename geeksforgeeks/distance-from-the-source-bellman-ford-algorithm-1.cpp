#include <bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
{
    vector<int> dis(V, INT_MAX);
    dis[src] = 0; 
    for (int i = 0; i < V - 1; i++)
    {
        for (auto ed : edges)
        {
            int a, b, c;
            a = ed[0];
            b = ed[1];
            c = ed[2];
            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    for (auto ed : edges)
    {
        int a, b, c;
        a = ed[0];
        b = ed[1];
        c = ed[2];
        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
        {
            return {-1};
        }
    }
    for (int i = 0; i < V; i++)
    {
        if (dis[i] == INT_MAX)
            dis[i] = 1e8;
    }

    return dis;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> edge_list;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back({a, b, c});
    }

   int src;
   cin >> src;
    vector<int> res = bellmanFord(n, edge_list, src);
    if (res.size() == 1 && res[0] == -1)
    {
        cout << "-1" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << res[i] << endl;
    }
    return 0;
}