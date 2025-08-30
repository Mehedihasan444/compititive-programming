#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105];
int dist[105];

class cmpare_pairs
{
public:
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
   priority_queue<pair<int, int>, vector<pair<int, int>>, cmpare_pairs> pq;
    pq.push({src, 0});
    dist[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();
        int par_node = p.first;
        int par_dis = p.second;
        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;
            if (dist[child_node] > par_dis + child_dis)
            {
                dist[child_node] = par_dis + child_dis;
                pq.push({child_node, dist[child_node]});
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
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dist[i] << endl;
    }

    return 0;
}