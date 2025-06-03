#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, m;
    cin >> a >> b >> m;
    long long int r = 1;
    for (int i = a; i <= b; i++)
    {
        r = (r * i) % m;
    }
    cout << r << endl;
    return 0;
}