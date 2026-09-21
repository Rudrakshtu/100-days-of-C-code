#include <stdio.h>

#define PI 3.14159265

int main() {
    double r;
    scanf("%lf", &r);
    printf("Area=%.2f, Circumference=%.2f\n", PI * r * r, 2 * PI * r);
    return 0;
}
