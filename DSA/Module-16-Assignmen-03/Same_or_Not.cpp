#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> stk;
    while (n--)
    {
        int x;
        cin >> x;
        stk.push(x);
    }
    queue<int> que;
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