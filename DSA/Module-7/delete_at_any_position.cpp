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
void delete_at_any_position(Node *head,int idx)
{
    Node *temp = head;
    
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
       
    }
    Node *DeleteNode=temp->next;
    temp->next=temp->next->next;
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
    delete_at_any_position(head,2);
    print_linked_list(head);
    return 0;
}