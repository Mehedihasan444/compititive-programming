#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, r;
    cin >> n;
    if (n < 10)
    {
        if (n == 7)
        {
            cout << "LUCKY" << "\n";
        }
        else
        {
            cout << "Not Lucky" << "\n";
        }
        return 0;
    }
    while (1)
    {
        n = n / 10;
        r = n % 10;
        if (r == 7)
        {
            cout << "LUCKY" << "\n";
            return 0;
        }
    }
    cout << "Not Lucky" << "\n";
    return 0;
}