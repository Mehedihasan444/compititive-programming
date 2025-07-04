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

void getMinAndMaxValue(Node *head)
{
    Node *temp = head;
    long long int min = INT_MAX, max = INT_MIN;
    while (temp != NULL)
    {
        if (temp->val < min)
        {
            min = temp->val;
        }
        if (temp->val > max)
        {
            max = temp->val;
        }

        temp = temp->next;
    }
    long long int diff = max - min;
    cout << diff << endl;
}
int main()
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
    getMinAndMaxValue(head);
    return 0;
}