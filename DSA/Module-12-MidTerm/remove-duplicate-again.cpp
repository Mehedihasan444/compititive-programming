#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        l.push_back(x);
    }
    l.sort();
    l.unique();
    for (int val: l)
    {
        cout << val << " ";
    }
   
   
    
    return 0;
}