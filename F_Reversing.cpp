#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    // int arr[n];
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {

    //         swap(arr[i], arr[j]);
    //     }
    // }
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}