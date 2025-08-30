#include <bits/stdc++.h>
using namespace std;
class cmpare_pairs
{
public:
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.second > b.second;
    }
};
int main()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmpare_pairs> pq;
    pq.push({10, 1});
    pq.push({5, 2});
    pq.push({20, 3});
    pq.push({1, 4});
    cout << pq.top().first << " " << pq.top().second << endl;
    return 0;
}