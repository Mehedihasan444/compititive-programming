#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = x,j=0;; i += 4,j++)
    {
        if(i>=25)
        {
            cout << j << endl;
            break;
        }
    }

    return 0;
}