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
    int mx = 0;
    int getHeight(TreeNode *root)
    {

        if (root == NULL)
            return 0;

        if (root->left == NULL && root->right == NULL)
            return 1;

        int l = getHeight(root->left);
        int r = getHeight(root->right);
        int diameter = l + r;
        if (diameter > mx)
            mx = diameter;
        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int height = getHeight(root);
        return mx;
    }
};
int main()
{

    return 0;
}