#include <stdio.h>   // Includes standard input-output functions like printf and scanf

int main() {
    char str[100];   // Declare a character array (string) of size 100
    int length = 0;  // Variable to store length of the string, initialized to 0

    printf("Enter a string: ");
    scanf("%s", str);   // Takes input from user (reads only one word, stops at space)

    // Loop to count characters until null character '\0' is found
    while(str[length] != '\0') {
        length++;   // Increase length for each character
    }

    // Print the total length of the string
    printf("Length = %d\n", length);

    return 0;   // End of program
}
