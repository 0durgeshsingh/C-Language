#include <stdio.h>   // For printf and scanf

int main() {

    char grade;   // variable

    printf("Enter grade: ");

    scanf(" %c", &grade);  
    // %c is used for character input
    // &grade stores input in grade variable

    printf("Grade = %c", grade);  
    // Prints the entered character

    return 0;   // End of program
}