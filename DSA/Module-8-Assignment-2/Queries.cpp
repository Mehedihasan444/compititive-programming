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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
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
void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
        tail = NULL;
}
void delete_at_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    tail = temp;
    Node *DeleteNode = temp->next;
    temp->next = NULL;
    delete DeleteNode;
}
void delete_at_any_position(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
        return;

    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    if (idx >= size || idx < 0)
    {
        return;
    }
    if (idx == 0)
    {
        delete_at_head(head, tail);
        return;
    }

    if (idx == size - 1)
    {
        delete_at_tail(head, tail);
        return;
    }

    temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *DeleteNode = temp->next;
    temp->next = temp->next->next;
    delete DeleteNode;
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
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;
    while (t--)
    {
        int x, v;

        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_any_position(head, tail, v);
        }

        print_linked_list(head);
    }
    return 0;
}