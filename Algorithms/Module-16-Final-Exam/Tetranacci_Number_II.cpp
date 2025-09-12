#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int T0 = 0, T1 = 1, T2 = 1, T3 = 2, Tn, i = 0;
    if (n == 0 || n==1 || n==2 || n==3)
    {
        cout << n << endl;
        return 0;
    }
    for (i = 4; i <= n; i++)
    {
        Tn = T0 + T1 + T2 + T3;
        T0 = T1;
        T1 = T2;
        T2 = T3;
        T3 = Tn;
    }

    cout << T3 << endl;

    return 0;
}