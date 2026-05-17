#include <stdio.h>

int main() {

    // Variable to store the original number
    int num;

    // Variable to store reversed number
    int rev = 0;

    // Variable to store last digit of number
    int digit;

    // Ask user to enter a number
    printf("Enter number: ");

    // Read number from user
    scanf("%d", &num);

    // do-while loop runs until num becomes 0
    do {

        // Get last digit of number
        // Example: 123 % 10 = 3
        digit = num % 10;

        // Add digit to reversed number
        // Example:
        // rev = 12
        // digit = 3
        // rev = 12 * 10 + 3 = 123
        rev = rev * 10 + digit;

        // Remove last digit from number
        // Example: 123 / 10 = 12
        num /= 10;

    } while (num != 0);

    // Print reversed number
    printf("Reverse = %d", rev);

    return 0; // Program ends successfully
}