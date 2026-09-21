#include <stdio.h>

int main() {
    long long n, rev = 0;
    scanf("%lld", &n);

    int negative = n < 0;
    if (negative) n = -n;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf("%lld\n", negative ? -rev : rev);
    return 0;
}
