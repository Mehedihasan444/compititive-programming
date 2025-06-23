#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    if (nums.empty())
    {
        return -1;
    }
    int len = nums.size();

    int l = 0, r = len - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else if (nums[mid] > target)
        {
            r = mid - 1;
        }
    }
    l = 0;
    r = len - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (l == r)
        {
            if (target > nums[l])
            {
                return l + 1;
            }
            else
            {
                return l;
            }
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else if (nums[mid] > target)
        {
            r = mid - 1;
        }
    }
  return l;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    int r = search(arr, x);
    cout << r << endl;
    return 0;
}