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
int flag = 0;
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
void insertAtAnyPosition(Node *&head, Node *&tail, int idx, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL && idx > 0)
    {
        cout << "Invalid" << endl;
        flag = 1;
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
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            flag = 1;
            return;
        }
    }
    if (temp->next == NULL)
    {
        insert_at_tail(head, tail, val);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
}

void printListLeftToRight(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void printListRightToLeft(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        insertAtAnyPosition(head, tail, x, v);
        Node *temp = head;
        int c = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            c++;
        }
        if (flag == 1)
        {
            flag = 0;
            continue;
        }
        if (x <= c && x >= 0)
        {
            cout << "L -> ";
            printListLeftToRight(head);
            cout << "R -> ";
            printListRightToLeft(tail);
        }
        else
        {
            cout << "L -> ";
            printListLeftToRight(head);
            cout << "R -> ";
            printListRightToLeft(tail);
        }
    }

    return 0;
}