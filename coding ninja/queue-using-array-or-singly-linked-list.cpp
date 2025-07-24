#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    vector<int> q;
    Queue()
    {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        return q.empty();
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        q.push_back(data);
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (isEmpty())
        {
            return -1;
        }
        int frontElement = q.front();
        q.erase(q.begin());
        return frontElement;
    }

    int front()
    {
        // Implement the front() function
        if (isEmpty())
        {
            return -1;
        }
        return q.front();
    }
};
int main()
{
    Queue q;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.enqueue(val);
    }
    cout << "Front element: " << q.front() << endl;
    cout << "Dequeue element: " << q.dequeue() << endl;
    cout << "Front element after dequeue: " << q.front() << endl;
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
   
    return 0;
}