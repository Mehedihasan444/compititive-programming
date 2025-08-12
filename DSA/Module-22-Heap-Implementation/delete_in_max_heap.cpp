#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int currentIndex = v.size() - 1;
    while (currentIndex != 0)
    {
        int parentIndex = (currentIndex - 1) / 2;
        if (v[parentIndex] < v[currentIndex])
        {
            swap(v[parentIndex], v[currentIndex]);
            currentIndex = parentIndex;
        }
        else
        {
            break;
        }
    }
}
void print_heap(vector<int> v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void delete_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();
    int currentIndex = 0;
    while (true)
    {
        int leftChildIndex = 2 * currentIndex + 1;
        int rightChildIndex = 2 * currentIndex + 2;
        int leftChildVal = INT_MIN, rightChildVal = INT_MIN;
        if (leftChildIndex < v.size())
            leftChildVal = v[leftChildIndex];
        if (rightChildIndex < v.size())
            rightChildVal = v[rightChildIndex];

        if (leftChildVal > rightChildVal && leftChildVal > v[currentIndex])
        {
            swap(v[leftChildIndex], v[currentIndex]);
            currentIndex = leftChildIndex;
        }
        else if (rightChildVal > leftChildVal && rightChildVal > v[currentIndex])
        {
            swap(v[rightChildIndex], v[currentIndex]);
            currentIndex = rightChildIndex;
        }
        else
            break;
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    return 0;
}