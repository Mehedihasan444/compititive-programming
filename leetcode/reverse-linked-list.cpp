#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void reverseLinkedList(ListNode *&head, ListNode *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverseLinkedList(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}
ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
    {
        return head;
    }
    reverseLinkedList(head, head);
    return head;
}
int main()
{
    ListNode *head = NULL, *tail = NULL;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;

        ListNode *newNode = new ListNode(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    ListNode *result = reverseList(head);
    for (ListNode *i = result; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }

    return 0;
}