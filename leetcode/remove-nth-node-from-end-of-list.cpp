#include <bits/stdc++.h>
using namespace std;
 class ListNode {
    public:
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


    void reverseList(ListNode*& head, ListNode* temp) {
          if (head == NULL) {
            return;
        }
        if (temp->next == NULL || head == NULL) {
            head = temp;
            return;
        }

        reverseList(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return head;
        }
        ListNode* temp = head;
        reverseList(head, temp);
        temp = head;
        if (n == 1) {
            ListNode* deleteNode = head;
            head = head->next;
            delete deleteNode;
        } else {

            int c = 1;
            while (temp != NULL && temp->next != NULL) {
                if (c == n - 1) {
                    ListNode* deleteNode = temp->next;
                    temp->next = temp->next->next;
                    delete deleteNode;
                    break;
                } else {

                    temp = temp->next;
                    c++;
                }
            }
        }
        temp = head;
        reverseList(head, temp);
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

    ListNode* result = removeNthFromEnd(head, 2);

    ListNode* temp = result;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}