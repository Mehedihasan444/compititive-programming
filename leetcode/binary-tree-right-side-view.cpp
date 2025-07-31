#include <bits/stdc++.h>
using namespace std;

 class TreeNode {
    public:
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<pair<TreeNode *, int>> q;
    bool freArr[3005] = {false};
    vector<int> rightViewTree;
    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<TreeNode *, int> p = q.front();
        q.pop();
        TreeNode *node = p.first;
        int l = p.second;
        if (!freArr[l])
        {
            freArr[l] = true;
            rightViewTree.push_back(node->val);
        }

        if (node->right)
            q.push({node->right, l + 1});
        if (node->left)
            q.push({node->left, l + 1});
    }
    return rightViewTree;
    }
};
int main()
{
  

    return 0;
}