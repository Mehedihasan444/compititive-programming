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
    TreeNode *invertTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        if (root)
            q.push(root);
        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            swap(node->left, node->right);
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }

        return root;
    }
};
int main()
{

    return 0;
}