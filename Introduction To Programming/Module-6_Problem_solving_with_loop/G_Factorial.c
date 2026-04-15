#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        long long factorial = 1;

        for (int j = 1; j <= n; j++) {
            factorial = factorial * j;
        }

        printf("%lld\n", factorial);
    }

    return 0;
}