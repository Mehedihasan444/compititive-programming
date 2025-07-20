#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{
public:
    Node *head = nullptr;
    Node *tail = nullptr;
    int sz = 0;
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

        sz++;
    }

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == nullptr)
        {
            tail = nullptr;
            return;
        }
        head->prev = nullptr;
        sz--;
    }

    int front()
    {

        return head->val;
    }
    int back()
    {

        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == nullptr;
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}