#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        for (int i = 0; i < n - 1; i++)
        {
            cout << c << " ";
        }
        cout << c << endl;
    }

    return 0;
}