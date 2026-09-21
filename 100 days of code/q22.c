#include <stdio.h>

int main() {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);

    if (sp > cp)
        printf("Profit %g%%\n", (sp - cp) / cp * 100);
    else if (sp < cp)
        printf("Loss %g%%\n", (cp - sp) / cp * 100);
    else
        printf("No Profit No Loss\n");
    return 0;
}
