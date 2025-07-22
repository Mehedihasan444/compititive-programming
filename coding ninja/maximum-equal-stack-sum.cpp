#include <bits/stdc++.h>
using namespace std;
int getSum(stack<int> stk)
{
    int s = 0;
    while (!stk.empty())
    {
        s += stk.top();
        stk.pop();
    }

    return s;
}
int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3)
{
    int s1 = getSum(stk1);
    int s2 = getSum(stk2);
    int s3 = getSum(stk3);
    while (1)
    {
        if (s1 == s2 && s2 == s3)
        {
            break;
        }
        int mx = max({s1, s2, s3});
        if (mx == s1)
        {
            s1 -= stk1.top();
            stk1.pop();
        }
        else if (mx == s2)
        {
            s2 -= stk2.top();
            stk2.pop();
        }
        else if (mx == s3)
        {
            s3 -= stk3.top();
            stk3.pop();
        }
    }
    return s1;
}

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    stack<int> stk1, stk2, stk3;

    for (int i = 0; i < n1; i++)
    {
        int val;
        cin >> val;
        stk1.push(val);
    }
    for (int i = 0; i < n2; i++)
    {
        int val;
        cin >> val;
        stk2.push(val);
    }
    for (int i = 0; i < n3; i++)
    {
        int val;
        cin >> val;
        stk3.push(val);
    }

    cout << maxSum(stk1, stk2, stk3) << endl;

    return 0;
}