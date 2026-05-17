#include <stdio.h>

int main() {
    
    // Variable to store the input number
    int n;

    // Counter variable, starts from 1
    int i = 1;

    // Variable to store factorial result
    // long is used because factorial values grow very fast
    long factorial = 1;

    // Ask user to enter a number
    printf("Enter number: ");

    // Read the number from user
    scanf("%d", &n);

    // do-while loop executes at least one time
    do {

        // Multiply current value of factorial by i
        factorial *= i;

        // Increase i by 1
        i++;

    } while (i <= n); // Continue loop until i becomes greater than n

    // Print the final factorial value
    printf("Factorial = %ld", factorial);

    return 0; // Program ends successfully
}