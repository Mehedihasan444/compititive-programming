#include <bits/stdc++.h>
using namespace std;


class MyQueue {
public:
    stack<int> s;
    MyQueue() {}

    void push(int x) { s.push(x); }

    int pop() {
        stack<int> temp;
        int val;
        while (!s.empty()) {
            val = s.top();
            s.pop();
            if (s.empty())
                break;

            temp.push(val);
        }
        while (!temp.empty()) {

            s.push(temp.top());
            temp.pop();
        }
        return val;
    }

    int peek() {
        stack<int> temp;
        int val;
        while (!s.empty()) {
            val = s.top();
            s.pop();

            temp.push(val);
        }
        while (!temp.empty()) {

            s.push(temp.top());
            temp.pop();
        }
        return val;
    }

    bool empty() { return s.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main()
{
    MyQueue queue;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        queue.push(x);
    }
    while (!queue.empty())
    {
        cout << queue.pop() << " ";
    }

    return 0;
}