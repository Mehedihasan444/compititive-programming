#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    double total_marks;

    Student(int id, char name[], char section, double total_marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student *students[3];

        for (int i = 0; i < 3; i++)
        {

            int id;
            char name[101];
            char section;
            double total_marks;
            cin >> id >> name >> section >> total_marks;
            students[i] = new Student(id, name, section, total_marks);
        }
        Student *max = students[0];
        for (int i = 0; i < 3; i++)
        {
            if (students[i]->total_marks > max->total_marks)
            {
                max = students[i];
            }
        }
        cout << max->id << " " << max->name << " " << max->section << " " << max->total_marks << endl;
    }

    return 0;
}