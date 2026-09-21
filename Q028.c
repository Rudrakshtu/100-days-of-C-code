#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    scanf("%d", &n);

    if (n < 2) {
        printf("1 (no even numbers)\n");
        return 0;
    }

    for (int i = 2; i <= n; i += 2)
        product *= i;

    printf("%lld (", product);
    for (int i = 2; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n)
            printf(" * ");
    }
    printf(")\n");
    return 0;
}
