#include <bits/stdc++.h>
using namespace std;
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> stk;
    while(!myStack.empty()){
        stk.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
      while(!stk.empty()){
        myStack.push(stk.top());
        stk.pop();
    }

    return myStack;
}
int main()
{
    stack<int> myStack;
    int n, x;
    cin>>n >> x;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        myStack.push(val);
    }
    myStack = pushAtBottom(myStack, x);
    while(!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    return 0;
}