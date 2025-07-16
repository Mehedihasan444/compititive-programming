#include <bits/stdc++.h>    
using namespace std;

//  Definition for singly-linked list.
class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void insert_at_tail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* newNode = new ListNode(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        int cnt = 0;
        while (temp != NULL) {
            if (temp->val == 0) {
                insert_at_tail(newHead, newTail, cnt);
                cnt = 0;
            } else {
                cnt += temp->val;
            }
            temp = temp->next;
        }
        return newHead;
    }
};