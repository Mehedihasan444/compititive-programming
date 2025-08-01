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
    delete_from_head(head, tail);
    print_linked_list(head);

    return 0;
}