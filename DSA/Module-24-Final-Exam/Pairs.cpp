#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first != r.first)
        return l.first < r.first;
    return l.second > r.second;
}

int main()
{
    int t;
    cin >> t;
    vector<pair<string, int>> v;
    while (t--)
    {
        string nm;
        int x;
        pair<string, int> p;
        cin >> nm >> x;
        p.first = nm;
        p.second = x;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }


    return 0;
}