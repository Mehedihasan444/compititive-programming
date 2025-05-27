#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA" << endl;
        if (c >= 'a' && c <= 'z')
        {
            cout << "IS SMALL" << endl;
        }
        else
        {
            cout << "IS CAPITAL" << endl;
        }
    }else if(c>='0' && c<='9'){
        cout << "IS DIGIT" << endl;
    }

    return 0;
}