#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        long long left = 0, middle = 0, right = 0;
        for (int i = 0; i < n; i++) {
            long long v;
            cin >> v;
            if (v < x) {left++;}
            else if (v == x) {middle++;}
            else {right++;}
        }
        if (middle > 0 || left == 0 || right == 0){
            cout << "Yes\n";}
        else{
            cout << "No\n";}
    }
    return 0;
}
