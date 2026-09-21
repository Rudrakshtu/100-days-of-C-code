#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }

    printf("%lld\n", (long long)a / x * b);
    return 0;
}
