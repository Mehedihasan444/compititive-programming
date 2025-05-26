#include <stdio.h>
#include <limits.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int c = 0;
        int lst = INT_MIN; 

        for (int i = 0; i < n; i++) {
            if (a[i] >= lst + 2) {
                c++;
                lst = a[i];
            }
        }

        printf("%d\n", c);
    }

    return 0;
}
