#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    scanf("%lf %lf %lf", &p, &r, &t);

    double si = p * r * t / 100.0;
    double ci = p * pow(1 + r / 100.0, t) - p;

    printf("Simple Interest=%.10g, Compound Interest=%.10g\n",
           round(si * 100) / 100, round(ci * 100) / 100);
    return 0;
}
