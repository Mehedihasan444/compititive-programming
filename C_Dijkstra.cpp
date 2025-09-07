#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll, ll>> adj_list[100005];
ll dist[100005];
ll parent[100005];
class cmpare_pairs
{
public:
    bool operator()(const pair<ll, ll> &a, const pair<ll, ll> &b)
    {
        return a.second > b.second;
    }
};
void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmpare_pairs> pq;
    pq.push({src, 0});
    dist[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> p = pq.top();
        pq.pop();
        ll par_node = p.first;
        ll par_dis = p.second;
        for (auto child : adj_list[par_node])
        {
            ll child_node = child.first;
            ll child_dis = child.second;
            if (dist[child_node] > par_dis + child_dis)
            {
                dist[child_node] = par_dis + child_dis;
                pq.push({child_node, dist[child_node]});
                parent[child_node] = par_node;
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (ll i = 1; i <= n; i++)
    {
        dist[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);
    if (dist[n] == LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        ll node = n;
        vector<ll> path;
        while (node != -1)
        {
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(), path.end());
        for (auto p : path)
        {
            cout << p << " ";
        }
        cout << endl;
    }

    return 0;
}