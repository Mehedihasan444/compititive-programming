#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            return false;
    }
    return true;
}
int minimumPairRemoval(vector<int> &nums)
{
    int c = 0;
    while (!isSorted(nums))
    {
        int min = INT_MAX;
        int idx;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] + nums[i + 1] < min)
            {
                min = nums[i] + nums[i + 1];
                idx = i;
            }
        }
        nums.erase(nums.begin()+idx, nums.begin() + idx + 2);
        nums.insert(nums.begin() + idx, min);
        c++;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = minimumPairRemoval(nums);
    cout << result << endl;
    return 0;
}