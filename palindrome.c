#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    if (originalNum == reversedNum)
        printf("%d is a Palindrome Number.\n", originalNum);
    else
        printf("%d is not a Palindrome Number.\n", originalNum);

    return 0;
}