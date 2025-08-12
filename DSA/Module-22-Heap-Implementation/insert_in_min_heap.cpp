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
    int val;
    cin >> val;
    arr.push_back(val);
    int currentIndex = arr.size() - 1;
    while (currentIndex != 0)
    {
        int parentIndex = (currentIndex - 1) / 2;
        if (arr[parentIndex] > arr[currentIndex])
        {
            swap(arr[parentIndex], arr[currentIndex]);
            currentIndex = parentIndex;
        }
        else
        {
            break;
        }
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}