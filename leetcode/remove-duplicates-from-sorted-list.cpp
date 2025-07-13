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

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *temp = head;
    for (ListNode *i = temp; i != NULL && i->next != NULL;)
    {

        ListNode *deleteNode = i->next;
        if (i->val == i->next->val)
        {
            i->next = i->next->next;
            delete deleteNode;
        }
        else
        {
            i = i->next;
        }
    }
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

    ListNode *result = deleteDuplicates(head);
    for (ListNode *i = result; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }

    return 0;
}