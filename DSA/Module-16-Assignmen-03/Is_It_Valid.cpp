#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> stk;
        string s;
        cin >> s;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (stk.empty())
            {

                stk.push(s[i]);
            }
            else
            {
                if ((stk.top() == '0' && s[i] == '1') || (stk.top() == '1' && s[i] == '0'))
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
        }
        cout << (stk.empty() ? "YES" : "NO") << endl;
    }

    return 0;
}