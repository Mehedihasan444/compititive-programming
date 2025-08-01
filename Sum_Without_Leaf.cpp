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
void levelOrder(Node *root,int &sum)
{
    if (root == NULL)
    {
        cout << 0 << endl;
        return;
    }
    queue<Node *> q;
    q.push(root); 
    while (!q.empty())
    {
       
        Node *f = q.front();
        q.pop();
        if (f->left || f->right )
        {
            
            sum+=f->val ;
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
    int val, sum = 0;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l != -1)
        {
            left = new Node(l);
        }
        else
        {
            left = NULL;
        }
        if (r != -1)
        {
            right = new Node(r);
        }
        else
        {
            right = NULL;
        }
        p->left = left;
        p->right = right;
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    levelOrder(root, sum);
    cout << sum << endl;
    return 0;
}