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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int temp = arr[i] + arr[j] + j - i;
                // if (temp < m)
                // {
                //     m = temp;
                // }
               m= min(temp,m);
            }
        }
        cout << m << endl;
    }

    return 0;
}