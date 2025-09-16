#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> adj_list[200005];
    bool vis[200005];
    void bfs(int src) {
        queue<int> q;
        q.push(src);
        vis[src] = true;
        while (!q.empty()) {
            int par = q.front();
            q.pop();

            for (auto child : adj_list[par]) {
                if (!vis[child]) {
                    q.push(child);
                    vis[child] = true;
                }
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        int e = edges.size();
        for (auto p : edges) {
            int a, b;
            a = p[0];
            b = p[1];
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        memset(vis, false, sizeof(vis));
        bfs(source);
        return vis[destination];
    }
};