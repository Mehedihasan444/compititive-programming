#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    priority_queue<ll, vector<ll>, greater<ll>> pq; 
    unordered_map<ll, ll> f;

    while (t--) {
        ll q;
        cin >> q;

        if (q == 1) {
            ll x;
            cin >> x;
            pq.push(x);
            f[x]++;
        } 
        else if (q == 2) {
            while (!pq.empty() && f[pq.top()] == 0) {
                pq.pop(); 
            }

            if (pq.empty()) {
                cout << "empty\n";
            } else {
                ll v = pq.top();
                cout << v << "\n";
                f[v] = 0; 
            }
        }
    }
    return 0;
}
