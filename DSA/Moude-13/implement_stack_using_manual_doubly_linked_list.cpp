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

class myStack
{
public:
    Node *head = NULL, *tail = NULL;
    int sz = 0;
    void push(int val) //O(1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        sz++;
    }
    void pop() //O(1)
    {
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
        sz--;
    }
    int top() //O(1)
    {
        return tail->val;
    }
    int size() //O(1)
    {
        return sz;
    }
    bool empty() //O(1)
    {
        return head==NULL;
    }
};
int main()
{
    myStack s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}