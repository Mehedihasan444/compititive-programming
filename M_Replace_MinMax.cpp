#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    int minValIdx = 0;
    int maxValIdx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            minValIdx = i;
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxValIdx = i;
        }
    }
    swap(arr[minValIdx], arr[maxValIdx]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}