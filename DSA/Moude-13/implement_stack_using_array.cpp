#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    myStack s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    // s.push(10);
    // s.push(20);
    // s.push(30);
    // cout << "Top element: " << s.top() << endl; // Output: 30
    // s.pop();
    // cout << "Top element after pop: " << s.top() << endl; // Output
    // if (!s.empty())
    // {
    //     cout << s.top() << endl;
    // }
    // if (!s.empty())
    // {
    //     s.pop();
    // }
    while (!s.empty())
    {
        cout << s.top() << endl; // Output the top element
        s.pop();                 // Remove the top element
    }

    return 0;
}