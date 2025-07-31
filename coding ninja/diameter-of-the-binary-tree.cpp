#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

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

int mx = 0;
int getHeight(TreeNode<int> *root)
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
int diameterOfBinaryTree(TreeNode<int> *root)
{
    int height = getHeight(root);
    return mx;
}

int main()
{

    return 0;
}