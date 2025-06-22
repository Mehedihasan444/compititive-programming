#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i+1 ; j < nums.size(); j++)
        {

            if (nums[i] == nums[j])
            {
                nums.erase(nums.begin() + j);
                j--;
            }
        }
    }

    return nums.size();
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
    int ans = removeDuplicates(nums);
    cout << ans << endl;

    return 0;
}