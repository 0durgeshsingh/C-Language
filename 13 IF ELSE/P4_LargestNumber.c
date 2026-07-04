#include <stdio.h>

int main() {
    int a, b, c;                        // Store three numbers

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);      // Read the numbers

    // Check if 'a' is the largest
    if (a >= b && a >= c) {
        printf("Largest number is %d", a);
    }
    // Check if 'b' is the largest
    else if (b >= a && b >= c) {
        printf("Largest number is %d", b);
    }
    // Otherwise, 'c' is the largest
    else {
        printf("Largest number is %d", c);
    }

    return 0;                           // End program
}
