#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            if (root == NULL)
                return NULL;
            TreeNode *f = q.front();
            q.pop();
            if (f->val == val)
            {
                return f;
            }

            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
        return NULL;
    }
};
int main()
{

    return 0;
}