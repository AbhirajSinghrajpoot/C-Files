#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}