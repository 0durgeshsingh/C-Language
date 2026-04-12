#include <stdio.h>     // For printf and scanf
#include <string.h>    // For string functions like strlen

int main() {
    // Declare a string (character array)
    char name[20];

    // Ask user to enter a string
    printf("Enter your name: ");

    // Read string input (no spaces allowed with %s)
    scanf("%s", name);

    // Print the entered string
    printf("Hello, %s\n", name);

    // Find length of the string using strlen()
    int length = strlen(name);

    // Print the length
    printf("Length of your name is: %d\n", length);

    return 0;   // End of program
}
