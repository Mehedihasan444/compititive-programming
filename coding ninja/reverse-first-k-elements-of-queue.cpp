#include <bits/stdc++.h>
using namespace std;
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int>stk;
    queue<int> nq;

    while(k--){
        stk.push(q.front());
        q.pop();
    }
    while(!stk.empty()){
nq.push(stk.top());
stk.pop();
    }
    while(!q.empty()){
nq.push(q.front());
q.pop();
    }

    return nq;
}
int main()
{
    queue<int> q;
    int n, k, val;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
    }
    queue<int> result = reverseElements(q, k);
    cout << "Reversed queue: ";
    while (!result.empty())
    {
        cout << result.front() << " ";
        result.pop();
    }
    return 0;
}