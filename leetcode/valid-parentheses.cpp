#include <bits/stdc++.h>
using namespace std;
 bool isValid(string s) {
        stack<char> stk;
        bool f = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {

                stk.push(s[i]);
            } else {
                if (stk.empty()) {
                    return false;
                } else {
                    if (stk.top() == '(' && s[i] == ')') {
                        stk.pop();
                    } else if (stk.top() == '{' && s[i] == '}') {
                        stk.pop();

                    } else if (stk.top() == '[' && s[i] == ']') {
                        stk.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        if (stk.empty())
            return true;
        else
            return false;
    }
int main()
{
    string s;
    cin >> s;

    if (isValid(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}