#include <bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            // delete head;
            return NULL;
        }
        ListNode *temp = head;
        int c = 0;
        while (temp != NULL)
        {

            c++;
            temp = temp->next;
        }
        // cout << c / 2 << endl;
        temp = head;
        int mid = c / 2;
        for (int i = 0; i < mid - 1; i++)
        {
            temp = temp->next;
        }
        ListNode *deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;

        return head;
    }
};