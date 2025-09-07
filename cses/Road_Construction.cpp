#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];
int components = 0;
int max_size = 0;
int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (leader1 == leader2)
        return;
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        max_size = max(max_size, group_size[leader1]);
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        max_size = max(max_size, group_size[leader2]);
    }
    components--;
}
int main()
{
    int n, e;
    cin >> n >> e;
    components = n;
    max_size = 1;
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        dsu_union(u, v);
        cout << components << " " << max_size << endl;
    }

    return 0;
}