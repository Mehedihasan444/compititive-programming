#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string val)
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
void findAddress(Node *head, Node *tail, string val, Node *&p)
{
    Node *temp = head;
    if (val == "prev" || val == "next")
    {
        if (val == "prev")
        {
            if (p->prev != NULL)
            {
                p = p->prev;
                cout << p->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else
        {
            if (p->next != NULL)
            {
                p = p->next;
                cout << p->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    else
    {

        while (temp != NULL)
        {
            if (temp->val == val)
            {
                cout << temp->val << endl;
                p = temp;
                return;
            }
            temp = temp->next;
        }
         cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *p = NULL;

    while (1)
    {
        string x;
        cin >> x;
        if (x == "end")
            break;
        insert_at_tail(head, tail, x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        string query;
        cin >> query;

        if (query == "visit")
        {
            string url;
            cin >> url;
            findAddress(head, tail, url, p);
        }
        else if (query == "prev")
        {
            findAddress(head, tail, query, p);
        }
        else if (query == "next")
        {
            findAddress(head, tail, query, p);
        }
    }

    return 0;
}