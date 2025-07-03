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
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *tail = new Node(50);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = tail;
    insert_at_tail(head, tail, 5);
    insert_at_tail(head, tail, 1);
    insert_at_tail(head, tail, 0);
    print_linked_list(head);
    cout << "Tail value: " << tail->val << endl; // Print the tail value for verification
    return 0;
}