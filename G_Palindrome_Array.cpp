#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1 || n == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }

    return 0;
}