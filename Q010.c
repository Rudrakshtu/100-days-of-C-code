#include <stdio.h>

int main() {
    int total;
    scanf("%d", &total);

    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;

    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
