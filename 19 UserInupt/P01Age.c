#include <stdio.h>   // Standard input-output library

int main() {
    int age;   // Integer variable to store age

    // Ask the user to enter their age
    printf("Enter your age: ");

    // Read integer input from the user
    // %d is used for integer values
    // &age gives the memory address where the value will be stored
    scanf("%d", &age);

    // Print the value entered by the user
    printf("You entered: %d\n", age);

    // Return 0 means the program ended successfully
    return 0;
}