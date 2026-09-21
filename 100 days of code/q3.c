#include <stdio.h>

int main() {
    double length, breadth;
    scanf("%lf %lf", &length, &breadth);
    printf("Area=%g, Perimeter=%g\n", length * breadth, 2 * (length + breadth));
    return 0;
}
