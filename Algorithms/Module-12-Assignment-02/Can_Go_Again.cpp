#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b;
    long long int  c;
    Edge(int a, int b,long long int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }
    long long int dis[1005];
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    int s, t;
    cin >> s >> t;
    dis[s] = 0; // source node
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    bool negative_cycle = false;
    for (auto ed : edge_list)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            negative_cycle = true;
            break;
        }
    }

    if (negative_cycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }
    while (t--)
    {
        int d;
        cin >> d;
        if (dis[d] == LLONG_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[d] << endl;
        }
    }

    return 0;
}