#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    Node *next;
    int val;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
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

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void delete_from_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        tail = NULL;
        head = NULL;
        delete deleteNode;
        return;
    }
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}
void delete_from_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    if (head == NULL)
    {
        return;
    }

    if (tail->prev == NULL)
    {
        tail = NULL;
        head = NULL;
        delete deleteNode;
        return;
    }
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}
void delete_from_any_pos(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }
    if (idx == 0)
    {
        delete_from_head(head, tail);
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= idx; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Invalid index" << endl;
        return;
    }
    Node *deleteNode = temp;
    if (temp->next == NULL)
    {
        delete_from_tail(head, tail);
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete deleteNode;
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
    Node *head = NULL, *tail = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_from_any_pos(head, tail, 3);
    print_linked_list(head);

    return 0;
}