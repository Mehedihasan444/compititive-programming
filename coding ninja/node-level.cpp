#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T val;
    bool isOriginal;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int nodeLevel(TreeNode<int> *root, int searchedValue)
{

    queue<pair<TreeNode<int> *, int>> q;

    if (root)
    {
        q.push({root, 1});
    }
    while (!q.empty())
    {
        TreeNode<int> *node = q.front().first;
        int level = q.front().second;
        q.pop();
        if (node->val == searchedValue)
            return level;
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
}

int main()
{

    return 0;
}