#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> getLeftView(TreeNode<int> *root)
{
    queue<pair<TreeNode<int> *, int>> q;
    bool freArr[3005] = {false};
    vector<int> leftViewTree;
    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> p = q.front();
        q.pop();
        TreeNode<int> *node = p.first;
        int l = p.second;
        if (!freArr[l])
        {
            freArr[l] = true;
            leftViewTree.push_back(node->data);
        }

        if (node->left)
            q.push({node->left, l + 1});
        if (node->right)
            q.push({node->right, l + 1});
    }
    return leftViewTree;
}
int main()
{

    return 0;
}