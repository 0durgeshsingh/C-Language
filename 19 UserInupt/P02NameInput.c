#include <stdio.h>   // Standard input-output library for printf and scanf

int main() {
    char name[50];   // Character array to store the user's name (max 49 chars + '\0')

    // Ask the user to enter their name
    printf("Enter your name: ");

    // Read the user's input and store it in the variable 'name'
    scanf("%s", name);

    // Print the entered name using %s format specifier
    printf("Hello, %s\n", name);

    // Return 0 indicates the program executed successfully
    return 0;
}