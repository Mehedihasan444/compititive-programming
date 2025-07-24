#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};
class Stack
{
    // Write your code here

public:
    Node *head = NULL;
    int sz = 0;
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {

        return sz;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;

        sz++;
    }

    void pop()
    {
        if (isEmpty())
            return;

        Node *deleteNode = head;

        head = head->next;
        delete deleteNode;
        sz--;
    }

    int getTop()
    {
        if (isEmpty())
            return -1;
        return head->data;
    }
};

int main()
{
    Stack stack;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        stack.push(val);
    }
    cout << "Top element: " << stack.getTop() << endl;
    cout << "Size of stack: " << stack.getSize() << endl;
    stack.pop();
    cout << "Top element after pop: " << stack.getTop() << endl;
    cout << "Size of stack after pop: " << stack.getSize() << endl;

    return 0;
}