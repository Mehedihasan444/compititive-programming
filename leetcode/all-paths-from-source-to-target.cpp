#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> paths;
vector<int> path;
void dfs(int src, int dest, vector<vector<int>> &graph)
{
    path.push_back(src);
    if (src == dest)
    {
        paths.push_back(path);
    }
    else
    {
        for (auto child : graph[src])
        {
            dfs(child, dest, graph);
        }
    }

    path.pop_back();
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
{
    int n = graph.size();
    dfs(0, n - 1, graph);
    return paths;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }
    vector<vector<int>> res = allPathsSourceTarget(graph);

    for (auto p : res)
    {
        for (auto node : p)
        {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}