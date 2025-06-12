#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin , s);
    stringstream ss(s);
    string word;
    int f = 0;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            cout << "YES" << endl;
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "NO" << endl;
    }

    return 0;
}