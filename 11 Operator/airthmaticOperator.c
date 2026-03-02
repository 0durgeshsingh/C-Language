#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int result;

    // Addition
    result = a + b;
    printf("Addition: %d + %d = %d\n", a, b, result);

    // Subtraction
    result = a - b;
    printf("Subtraction: %d - %d = %d\n", a, b, result);

    // Multiplication
    result = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, result);

    // Division (integer division)
    result = a / b;
    printf("Division: %d / %d = %d (integer division)\n", a, b, result);

    // Division (floating-point division)
    float result_float = (float)a / b;
    printf("Division: %d / %d = %.2f (floating-point division)\n", a, b, result_float);

    // Modulus
    result = a % b;
    printf("Modulus: %d %% %d = %d\n", a, b, result);

    // Increment (post-increment)
    int x = 5;
    printf("Before post-increment: x = %d\n", x);
    result = x++;
    printf("After post-increment: x = %d, result = %d\n", x, result);

    // Increment (pre-increment)
    x = 5;
    printf("Before pre-increment: x = %d\n", x);
    result = ++x;
    printf("After pre-increment: x = %d, result = %d\n", x, result);

    // Decrement (post-decrement)
    x = 5;
    printf("Before post-decrement: x = %d\n", x);
    result = x--;
    printf("After post-decrement: x = %d, result = %d\n", x, result);

    // Decrement (pre-decrement)
    x = 5;
    printf("Before pre-decrement: x = %d\n", x);
    result = --x;
    printf("After pre-decrement: x = %d, result = %d\n", x, result);

    return 0;


    // Output Result
            // Addition: 10 + 3 = 13
            // Subtraction: 10 - 3 = 7
            // Multiplication: 10 * 3 = 30
            // Division: 10 / 3 = 3 (integer division)
            // Division: 10 / 3 = 3.33 (floating-point division)
            // Modulus: 10 % 3 = 1
            // Before post-increment: x = 5
            // After post-increment: x = 6, result = 5
            // Before pre-increment: x = 5
            // After pre-increment: x = 6, result = 6
            // Before post-decrement: x = 5
            // After post-decrement: x = 4, result = 5
            // Before pre-decrement: x = 5
            // After pre-decrement: x = 4, result = 4
}
