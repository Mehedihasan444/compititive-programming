#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
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
    int sum = 0;
    void getSum(TreeNode *root)
    {
        if (root == NULL)
            return;
        if (root->left && (root->left->left == NULL && root->left->right == NULL))
        {
            sum += root->left->val;
        }
        getSum(root->left);
        getSum(root->right);
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        getSum(root);
        return sum;
    }
};
int main()
{
  

    return 0;
}