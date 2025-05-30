#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long u, v, a, s;
        cin >> u >> v >> a >> s;

        if (u * u <= v * v + 2 * a * s) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
