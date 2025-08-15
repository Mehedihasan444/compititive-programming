#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *convert(vector<int> &nums, int n, int l, int r)
    {
        if (l > r)
            return nullptr;
        int mid = (l + r) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        TreeNode *leftroot = convert(nums, n, l, mid - 1);
        TreeNode *rightroot = convert(nums, n, mid + 1, r);
        root->left = leftroot;
        root->right = rightroot;
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        TreeNode *root = convert(nums, nums.size(), 0, nums.size() - 1);
        return root;
    }
};
int main()
{

    return 0;
}