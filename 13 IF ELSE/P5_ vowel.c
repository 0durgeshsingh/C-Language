#include <stdio.h>

int main() {
    char ch;                    // Store one character

    printf("Enter a character: ");
    scanf(" %c", &ch);          // Read the character

    // Check if the character is a vowel
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
        printf("Vowel");        // Print if vowel
    }
    else {
        printf("Consonant");    // Otherwise, consonant
    }

    return 0;                   // End program
}
