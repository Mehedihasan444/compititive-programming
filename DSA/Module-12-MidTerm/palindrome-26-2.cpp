#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool checkPalindrome(Node *head, Node *tail)
{
    while (head != NULL && tail != NULL)
    {
        if (head->val != tail->val)
        {

            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        insertAtTail(head, tail, x);
    }
    bool result = checkPalindrome(head, tail);
    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}