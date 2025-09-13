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
        sort(arr.begin(), arr.end());
        int min = arr[0];
        int max = arr[n - 1];
        if (min % 2 == max % 2)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt1 = 0, i = 0;
            while (arr[i] % 2 != max % 2)
            {
                cnt1++;
                i++;
            }
            int j = n - 1, cnt2 = 0;
            while (arr[j] % 2 != min % 2)
            {
                cnt2++;
                j--;
            }
            cout << (cnt1 < cnt2 ? cnt1 : cnt2) << endl;
        }
    }

    return 0;
}