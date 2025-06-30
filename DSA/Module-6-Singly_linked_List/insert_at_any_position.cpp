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
void insert_at_any_position(Node *head, int idx, int val)
{
    Node *newNode = new Node(val);
  
    Node *temp = head;
    int count = 0;
    while (count != idx - 1)
    {
        temp = temp->next;
        count++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);
    Node *eighth = new Node(80);
    Node *ninth = new Node(90);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    insert_at_any_position(head, 5, 5);
    insert_at_any_position(head, 7, 1);
    insert_at_any_position(head, 4, 0);
    print_linked_list(head);
    return 0;
}