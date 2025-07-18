#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    auto it = remove(nums.begin(), nums.end(), val);
    nums.erase(it, nums.end());
    return nums.size();
}

int main()
{
    int n;  
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int val;
    cin >> val;

    int r = removeElement(nums, val);

    for (int i = 0; i < r; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
