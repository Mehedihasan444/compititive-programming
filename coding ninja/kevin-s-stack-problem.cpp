#include <bits/stdc++.h>
using namespace std;
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char>stk;
	for(char c:s){
		stk.push(c);
	}
	string str;
while(!stk.empty()){
str+=stk.top();
stk.pop();
}

return str;
}

int main()
{
    string s;
    cin >> s;
    string result = kevinStackProblem(s);
    cout << "Reversed string: " << result << endl;
    cout << "Length of reversed string: " << result.length() << endl;
    return 0;
}