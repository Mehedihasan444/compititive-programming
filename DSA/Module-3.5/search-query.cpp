#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    sort(arr.begin(),arr.end());
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int f = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                f = 1;
                break;
            }
            else if (x < arr[mid])
            {
                r = mid - 1;
            }
            else if (x > arr[mid])
            {
                l = mid + 1;
            }
        }
        if (f == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}