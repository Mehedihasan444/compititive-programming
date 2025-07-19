#include <bits/stdc++.h>
using namespace std;

int main()
{
   stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    while (!s.empty())
    {
        cout << s.top() << endl; // Output the top element
        s.pop();                 // Remove the top element
    }
    return 0;
}