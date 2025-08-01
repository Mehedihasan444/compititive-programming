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
vector<int> outerTree;

void leftSideView(Node *root)
{
    queue<pair<Node *, int>> q;
    bool freArr[100001] = {false};

    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int l = p.second;
        if (!freArr[l])
        {
            freArr[l] = true;
            outerTree.push_back(node->val);
        }

        if (node->left)
            q.push({node->left, l + 1});
        else if (l != 1)
        {
            if (node->right)
                q.push({node->right, l + 1});
        }
    }
}
void rightSideView(Node *root)
{
    queue<pair<Node *, int>> q;
    bool freArr[100001] = {false};

    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int l = p.second;
        if (!freArr[l])
        {
            freArr[l] = true;
            outerTree.push_back(node->val);
        }

        if (node->right)
            q.push({node->right, l + 1});
        else if (l != 1)
        {
            if (node->left)
                q.push({node->left, l + 1});
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
    leftSideView(root);
    reverse(outerTree.begin(), outerTree.end());
    outerTree.pop_back();
    rightSideView(root);

    for (int val : outerTree)
    {
        cout << val << " ";
    }
    return 0;
}