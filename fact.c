#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }

        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}