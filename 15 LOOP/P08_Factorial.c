#include <stdio.h>

int main() {
    int n, i = 1;
    long factorial = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    do {
        factorial *= i;
        i++;
    } while (i <= n);

    printf("Factorial = %ld", factorial);

    return 0;
}
