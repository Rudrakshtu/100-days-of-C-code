#include <stdio.h>

int main() {
    double a, b;
    char op;
    scanf("%lf %lf %c", &a, &b, &op);

    switch (op) {
        case '+': printf("%g\n", a + b); break;
        case '-': printf("%g\n", a - b); break;
        case '*': printf("%g\n", a * b); break;
        case '/':
            if (b == 0) printf("Error: division by zero\n");
            else printf("%g\n", a / b);
            break;
        case '%':
            if ((int)b == 0) printf("Error: division by zero\n");
            else printf("%d\n", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
