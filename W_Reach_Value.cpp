#include <bits/stdc++.h>
using namespace std;
bool reachValue(long long int start, long long int n)
{
    if (start == n)
        return true;
    if (start > n)
        return false;
    bool op1 = reachValue(start * 10, n);
    bool op2 = reachValue(start * 20, n);
    return op1 || op2;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        bool res = reachValue(1, n);
        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}