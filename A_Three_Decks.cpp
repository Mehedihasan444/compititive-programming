#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if ((sum) % 3 == 0)
        {
            int each = sum / 3;
            if (each < a || each < b)
            {
                cout << "NO" << endl;
            }
            else if (((2 * each) - (a + b)) == c - each)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}