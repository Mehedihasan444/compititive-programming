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

void removeDuplicateValues(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }

    Node *temp = head;
    for (Node *i = temp; i != NULL; i = i->next)
    {

        for (Node *j = i->next, *k = i; j != NULL;)
        {
            if (i->val == j->val)
            {
                Node *DeleteNode = j;
                k->next = j->next;
                j = j->next;
                delete DeleteNode;
                if (k->next == NULL)
                {
                    tail = k;
                }
            }
            else
            {
                k = j;
                j = j->next;
            }
        }
    }
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
    removeDuplicateValues(head, tail);
    print_linked_list(head);
    return 0;
}