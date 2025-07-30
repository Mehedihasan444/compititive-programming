
#include <bits/stdc++.h>
using namespace std;

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


bool isNodePresent(BinaryTreeNode<int> *root, int x) {
     
if(root==NULL) return false;
if(root->data==x) return true;
if(isNodePresent(root->left,x)) return true;
if(isNodePresent(root->right,x)) return true;
return false;
}

int main() {
   
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    root->left = new BinaryTreeNode<int>(2);
    root->right = new BinaryTreeNode<int>(3);
    root->left->left = new BinaryTreeNode<int>(4);
    root->left->right = new BinaryTreeNode<int>(5);

    int x = 4;
    if (isNodePresent(root, x)) {
        cout << "Node with value " << x << " is present in the tree." << endl;
    } else {
        cout << "Node with value " << x << " is not present in the tree." << endl;
    }

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}