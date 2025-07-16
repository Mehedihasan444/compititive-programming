#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int c = 1, l = 1;
        ListNode *add1 = NULL, *add2 = NULL;
        while (temp->next != NULL) {

            temp = temp->next;
            c++;
        }
        temp = head;
        while (temp != NULL) {
            if (l == k) {
                add1 = temp;
            }
            if (l == (c + 1 - k)) {
                add2 = temp;
            }
            temp = temp->next;
            l++;
        }
        if (add1 && add2) {

            swap(add1->val, add2->val);
        }
        // cout << c << endl;
        return head;
    }
};
int main()
{
    
    return 0;
}