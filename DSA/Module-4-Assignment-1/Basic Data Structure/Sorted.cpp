#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "NO" << endl;
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}