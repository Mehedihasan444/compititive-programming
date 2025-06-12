#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    string cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >>
            students[i].s >> students[i].id;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {

        swap(students[i].s, students[j].s);
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}