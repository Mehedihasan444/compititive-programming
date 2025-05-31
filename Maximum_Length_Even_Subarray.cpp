#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int totalSum = N * (N + 1) / 2;
        if (totalSum % 2 == 0)
            cout << N << endl;
        else
            cout << N - 1 << endl;
    }
    return 0;
}
