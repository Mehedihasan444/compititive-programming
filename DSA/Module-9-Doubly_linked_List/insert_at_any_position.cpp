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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    head = newNode;
}
void insert_at_any_pos(Node *&head, Node *&tail, int val, int idx)
{
    Node *newNode = new Node(val);
    if (head == NULL && idx > 0)
    {
        cout << "Invalid index" << endl;
        return;
    }

    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        insert_at_tail(head, tail, val);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
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
    insert_at_any_pos(head, tail, 11, 3);
    print_linked_list(head);

    return 0;
}