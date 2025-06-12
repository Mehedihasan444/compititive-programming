#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    string cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student l, Student r)
{
    int l_marks = l.math_marks + l.eng_marks;
    int r_marks = r.math_marks + r.eng_marks;
    return l.eng_marks > r.eng_marks ? true : l.eng_marks == r.eng_marks ? l.math_marks > r.math_marks ? true : l.math_marks == r.math_marks ? l.id < r.id ? true : false
                                                                                                                                             : false
                                                                         : false;
}
int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >>
            students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}