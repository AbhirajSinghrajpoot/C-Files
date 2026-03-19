#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter expression (e.g., 10 + 5): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("Result: %.2lf\n", a + b);
            break;
        case '-':
            printf("Result: %.2lf\n", a - b);
            break;
        case '*':
            printf("Result: %.2lf\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            printf("Result: %.2lf\n", a / b);
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    return 0;
}