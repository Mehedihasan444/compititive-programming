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
        this->left = nullptr;
        this->right = nullptr;
    }
};
Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = nullptr;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *left = nullptr, *right = nullptr;
        if (l != -1)
        {
            left = new Node(l);
        }
        if (r != -1)
        {
            right = new Node(r);
        }
        node->left = left;
        node->right = right;
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return root;
}
Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftroot = convert(a, n, l, mid - 1);
    Node *rightroot = convert(a, n, mid + 1, r);
    root->left = leftroot;
    root->right = rightroot;
    return root;
}
void levelOrder(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty." << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        if (root == NULL)
            return;
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
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

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node *root = convert(a, n, 0, n - 1);
    levelOrder(root);

    return 0;
}