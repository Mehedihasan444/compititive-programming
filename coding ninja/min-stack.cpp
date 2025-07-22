#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    stack<int> stk;
    stack<int> minstk;
    MinStack() {}

    void push(int val)
    {
        stk.push(val);
        if (minstk.empty() || val <= minstk.top())
            minstk.push(val);
    }

    void pop()
    {
        if (!stk.empty())
        {
            if (minstk.top() == stk.top())
            {
                minstk.pop();
            }
            stk.pop();
        }
    }

    int top() { return stk.top(); }

    int getMin() { return minstk.top(); }
};

int main()
{
    MinStack minStack;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        minStack.push(val);
    }
    cout << "Top element: " << minStack.top() << endl;
    cout << "Minimum element: " << minStack.getMin() << endl;
    minStack.pop();
    cout << "Top element after pop: " << minStack.top() << endl;
    cout << "Minimum element after pop: " << minStack.getMin() << endl;

    return 0;
}