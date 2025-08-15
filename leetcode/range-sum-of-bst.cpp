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
    int sum = 0;
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            if (root == NULL)
                return 0;
            TreeNode *f = q.front();
            q.pop();
            if (f->val >= low && f->val <= high)
            {
                sum += f->val;
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
        return sum;
    }
};

int main()
{
   
    return 0;
}