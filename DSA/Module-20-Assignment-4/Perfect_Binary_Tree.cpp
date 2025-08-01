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

void levelOrder(Node *root, int &nodes)
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

        nodes++;

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
    levelOrder(root, nodes);
    int height = getHeight(root);
    if (nodes == (int)pow(2 ,height) - 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}