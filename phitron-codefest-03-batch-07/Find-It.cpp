#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;
    Node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

void levelOrder(Node *root, vector<int> &v)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if (!f->left && !f->right)
        {
            v.push_back(f->val);
        }
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root = (val == -1) ? NULL : new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *left = (l != -1) ? new Node(l) : NULL;
        Node *right = (r != -1) ? new Node(r) : NULL;
        p->left = left;
        p->right = right;
        if (left)
            q.push(left);
        if (right)
            q.push(right);
    }
    return root;
}

int main()
{
    vector<int> v;
    Node *root = input_tree();
    levelOrder(root, v);

    map<int, int> freq;
    for (int val : v)
    {
        freq[val]++;
    }

    int bestType = -1, bestFreq = -1;
    for (auto &p : freq)
    {
        int type = p.first;
        int count = p.second;
        if (count > bestFreq || (count == bestFreq && type < bestType))
        {
            bestFreq = count;
            bestType = type;
        }
    }

    cout << bestType << endl;

    return 0;
}
