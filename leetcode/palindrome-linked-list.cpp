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
 

    void insertAtTail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* newNode = new ListNode(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void reverseLinkedList(ListNode*& head, ListNode* temp) {
        if (temp->next == NULL) {
            head = temp;
            return;
        }
        reverseLinkedList(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *newHead = NULL, *newTail = NULL;
        ListNode* temp = head;
        ListNode* temp1 = head,* temp2 = head;
        while (temp != NULL) {
            insertAtTail(newHead, newTail, temp->val);
            temp = temp->next;
        }
        reverseLinkedList(newHead, newHead);
        temp1 = head;
        temp2 = newHead;
        while (temp1 != NULL && temp2!=NULL) {
            if(temp1->val!=temp2->val){
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return true;
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

    bool result = isPalindrome(head);
    cout << (result ? "true" : "false") << endl;

    return 0;
}