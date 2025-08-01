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
vector<int> leaf_nodes;
void levelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if (!f->left && !f->right)
        {
            leaf_nodes.push_back(f->val);
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
}

int main()
{
    int val;
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
    levelOrder(root);
    sort(leaf_nodes.rbegin(), leaf_nodes.rend());
    for (int vl : leaf_nodes)
    {
        cout << vl << " ";
    }
    return 0;
}