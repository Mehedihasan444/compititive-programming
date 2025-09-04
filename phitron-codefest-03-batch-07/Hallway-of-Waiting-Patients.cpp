#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> p;
    while (q--)
    {
        string s1;
        cin >> s1;
        if (s1 == "ARRIVE")
        {
            string s2;
            cin >> s2;
            p.push(s2);
        }
        else if (s1 == "FIRST")
        {
            if (p.empty())
                cout << "No patients" << endl;
            else
                cout << p.front() << endl;
        }
        else if (s1 == "LAST")
        {
            if (p.empty())
                cout << "No patients" << endl;
            else
                cout << p.back() << endl;
        }
        else if (s1 == "COUNT")
        {
            cout << p.size() << endl;
        }
        else if (s1 == "SERVE")
        {
            if (p.empty())
                cout << "No patients" << endl;
            else
            {
                // cout << p.front() << endl;
                p.pop();
            }
        }
        else if (s1 == "SHOW")
        {
            if (p.empty())
            {
                cout << "No patients";
            }else{

                queue<string> temp = p;
                while (!temp.empty())
                {
                    cout << temp.front() << " ";
                    temp.pop();
                }
            }
            cout << endl;
        }
    }

    return 0;
}