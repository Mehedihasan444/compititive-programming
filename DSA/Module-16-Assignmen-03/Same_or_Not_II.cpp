#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> lst;
    void push(int x)
    {
        lst.push_back(x);
    }
    void pop()
    {
        lst.pop_back();
    }

    bool empty()
    {
        return lst.empty();
    }
    int top()
    {
        return lst.back();
    }
};

class myQueue
{
public:
 list<int> lst;
    void push(int x)
    {
        lst.push_back(x);
    }
    void pop() {
         lst.pop_front();
    }

    bool empty()
    {
         return lst.empty();
    }
    int front()
    {
        return lst.front();
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    myStack stk;
    while (n--)
    {
        int x;
        cin >> x;
        stk.push(x);
    }
    myQueue que;
    while (m--)
    {
        int x;
        cin >> x;
        que.push(x);
    }
    if (m != n)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!stk.empty() && !que.empty())
    {
        if (stk.top() != que.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        stk.pop();
        que.pop();
    }

    cout << (stk.empty() && que.empty() ? "YES" : "NO") << endl;

    return 0;
}