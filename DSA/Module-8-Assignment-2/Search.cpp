#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void checkTheExistence(Node *head, int x)
{
    Node *temp = head;
    int idx = 0;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            cout << idx << endl;
            return;
        }

        temp = temp->next;
        idx++;
    }

    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        checkTheExistence(head, x);
    }

    return 0;
}