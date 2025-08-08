#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(int l, int r)
    {
        return l > r;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int q;
    cin >> q;
    while (q--)
    {

        int x;
        cin >> x;
        if (x == 0)
        {
            int y;
            cin >> y;
            pq.push(y);
            cout << pq.top() << endl;
        }
        else if (x == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {

                cout << pq.top() << endl;
            }
        }
        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}