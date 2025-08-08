#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(pair<string, int> l, pair<string, int> r)
    {
        return l.second < r.second;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        map<string, int> m;
        priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string wrd;
        while (ss >> wrd)
        {
            m[wrd]++;
            pq.push({wrd, m[wrd]});
        }
        cout<<pq.top().first << " " << pq.top().second << endl;
    }

    return 0;
}