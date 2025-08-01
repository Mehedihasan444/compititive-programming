#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        Node *node = q.front().first;
        int level = q.front().second;
        q.pop();
        if (level == x)
            cout << node->val << " ";
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
}
int getHeight(Node *root)
{
    if (root == NULL)
        return 0;

    int l = getHeight(root->left);
    int r = getHeight(root->right);

    return max(l, r) + 1;
}
int main()
{
    int val, nodes = 0;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l != -1)
            left = new Node(l);
        else
            left = NULL;
        if (r != -1)
            right = new Node(r);
        else
            right = NULL;
        node->left = left;
        node->right = right;
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    int x;
    cin >> x;
    int h = getHeight(root);

    if (x > h - 1)
    {
        cout << "Invalid" << endl;
        return 0;
    }

    levelOrder(root, x);

    return 0;
}