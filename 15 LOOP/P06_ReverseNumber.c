#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Enter number: ");
    scanf("%d", &num);

    do {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    } while (num != 0);

    printf("Reverse = %d", rev);

    return 0;
}

