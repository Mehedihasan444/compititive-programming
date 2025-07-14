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

ListNode *removeElements(ListNode *&head, int val)
{

    while (head != NULL && head->val == val)
    {
        ListNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    ListNode *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->next->val == val)
        {
            ListNode *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }
        else
        {

            temp = temp->next;
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

    ListNode* result = removeElements(head, 6);

    ListNode* temp = result;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}