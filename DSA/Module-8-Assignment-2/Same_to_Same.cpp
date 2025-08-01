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

void isSameToSame(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    long long int min = INT_MAX, max = INT_MIN;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            cout << "NO" << endl;
            return;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    cout << "YES" << endl;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val1, size1 = 0;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
        size1++;
    }
    int val2, size2 = 0;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
        size2++;
    }
    if (size1 != size2)
    {
        cout << "NO" << endl;
        return 0;
    }
    isSameToSame(head1, head2);
    return 0;
}