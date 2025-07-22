#include <bits/stdc++.h> 
using namespace std;
queue<int> reverseQueue(queue<int> q)
{
   stack <int> stk;
   while(!q.empty()){
       stk.push(q.front());
       q.pop();
   }
   while(!stk.empty()){
       q.push(stk.top());
       stk.pop();
   }
  return q;
}

int main()
{
    queue<int> q;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
    }
    q = reverseQueue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}