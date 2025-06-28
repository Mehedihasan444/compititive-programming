#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        // (*this).val = val;
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node a(10), b(20), c(30);
    // a.val = 1;
    // b.val = 2;
    // c.val = 3;
    a.next = &b;
    b.next = &c;
    // c.next = NULL;

    cout << "Value of a: " << a.val << endl;
    cout << "Value of b: " << a.next->val << endl; //(*a.next).val
    cout << "Value of c: " << a.next->next->val << endl;

    return 0;
}