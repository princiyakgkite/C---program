#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, sum;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    sum = n1 + n2 + n3 + n4 + n5;

    printf("Sum = %d\n", sum);

    return 0;
}