#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}

    ListNode() : val(0), next(NULL) {}
};

ListNode *middleNode(ListNode *head)
{

    ListNode *temp = head;
    int c = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    temp = head;
    for (int i = 0; i < c / 2; i++)
    {
        temp = temp->next;
    }
    // cout << temp->val<< endl;
    return temp;
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

    ListNode *result = middleNode(head);
    if (result != NULL)
    {
        cout << result->val << endl;
    }
    else
    {
        cout << "List is empty" << endl;
    }
    return 0;
}