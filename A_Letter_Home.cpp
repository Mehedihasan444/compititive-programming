#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mainDistance = abs(arr[0] - arr[n - 1]);
        int leftDistance = abs(arr[0] - s);
        int rightDistance = abs(arr[n - 1] - s);
        int ans = min(leftDistance, rightDistance);
        cout << ans + mainDistance << endl;
    }

    return 0;
}