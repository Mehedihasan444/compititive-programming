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
        // f->left != NULL or
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

Node *input_tree()
{
    int val;
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
            right = new Node(l);
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
    return root;
}


int countLeafNodes(Node* root){
    if (root == NULL) {
        return 0;
    }
    if (root->left==NULL&&root->right==NULL)
    {
       return 1;
    }
    
    int l= countLeafNodes(root->left);
    int r= countLeafNodes(root->right);
    return l + r; 
}
int main()
{
    Node *root = input_tree();
    cout<<countLeafNodes(root)<<endl;
    return 0;
}