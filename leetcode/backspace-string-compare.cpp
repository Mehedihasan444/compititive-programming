#include <bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t)
{
    stack<char> stk1, stk2;
    for (char c : s)
    {
        if (c == '#')
        {
            if (!stk1.empty())
                stk1.pop();
            continue;
        }
        stk1.push(c);
    }
    for (char c : t)
    {
        if (c == '#')
        {
            if (!stk2.empty())
                stk2.pop();
            continue;
        }
        stk2.push(c);
    }
    string s1, t1;
    while (!stk1.empty())
    {

        s1 += stk1.top();
        stk1.pop();
    }
    while (!stk2.empty())
    {

        t1 += stk2.top();
        stk2.pop();
    }

    if (s1 == t1)
        return true;
    else
        return false;
}
int main()
{
    string s,t;
    cin >> s>>t;
    if (backspaceCompare(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}