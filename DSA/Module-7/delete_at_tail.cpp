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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "Value of node: " << temp->val << endl;
        temp = temp->next;
    }
}
void delete_at_tail(Node *head, Node *&tail)
{
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
    delete_at_tail(head, tail);
    print_linked_list(head);
    cout << "Tail value: " << tail->val << endl;
    return 0;
}