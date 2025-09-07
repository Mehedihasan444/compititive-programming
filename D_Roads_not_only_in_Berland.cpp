#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];
int n, e;
int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
vector<pair<int, int>> cycle_edges;
vector<pair<int, int>> new_edges;
void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (leader1 == leader2)
    {
        cycle_edges.push_back({node1, node2});
        return;
    }
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}
int main()
{

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
    e = n - 1;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        dsu_union(u, v);
    }
    for (int i = 1; i <= n; i++)
    {
        int leader1 = find(i);
        int leader2 = find(1);
        if (leader1 != leader2)
        {
            new_edges.push_back({i, 1});
            dsu_union(i, 1);
        }
    }

    cout << cycle_edges.size() << endl;
    for (int i = 0; i < cycle_edges.size(); i++)
    {
        cout << cycle_edges[i].first << " " << cycle_edges[i].second <<" "<< new_edges[i].first << " " << new_edges[i].second << endl;
    }
    return 0;
}