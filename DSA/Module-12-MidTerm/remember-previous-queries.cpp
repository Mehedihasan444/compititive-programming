#include <bits/stdc++.h>
using namespace std;

void printListLeftToRight(list<int> &lst)
{
    for (int val : lst)
    {
        cout << val << " ";
    }
    cout << endl;
}
void printListRightToLeft(list<int> &lst)
{
    for (auto it = lst.rbegin(); it != lst.rend(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
}

int main()
{
    list<int> lst;
    int q;
    cin >> q;
    while (q--)
    {
        long long x;
        int v;
        cin >> x >> v;
        int size = lst.size();
        if (x == 0)
        {
            lst.push_front(v);
        }
        else if (x == 1)
        {
            lst.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < size)
            {
                lst.erase(next(lst.begin(), v));
            }
        }

        cout << "L -> ";
        printListLeftToRight(lst);
        cout << "R -> ";
        printListRightToLeft(lst);
    }

    return 0;
}