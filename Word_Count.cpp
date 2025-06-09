#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string word;
    cin >> word;
    int c = 0;
    stringstream ss(s);
    string w;
    while (ss >> w)
    {
        if (w == word)
        {
            c++;
        }
    }
    cout << c << endl;
    

    return 0;
}