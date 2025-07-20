#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    queue<int> q;
    MyStack() {}

    void push(int x) { q.push(x); }

    int pop()
    {
        queue<int> temp;
        int val;
        while (!q.empty())
        {
            val = q.front();
            q.pop();
            if (q.empty())
                break;

            temp.push(val);
        }
        q = temp;
        return val;
    }

    int top() { return q.back(); }

    bool empty() { return q.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main(){

    MyStack stack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stack.push(x);
    }
    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    return 0;
}