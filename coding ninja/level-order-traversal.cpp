#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

template <typename T>
class BinaryTreeNode
{
public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    vector<int> v;
    if (root)
        q.push(root);
    while (!q.empty())
    {

        BinaryTreeNode<int> *node = q.front();
        q.pop();
        v.push_back(node->val);
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return v;
}
int main()
{

    return 0;
}