#include <stdio.h>

int main() {
    
    // Break Example
    printf("Break Example:\n");

    for(int i = 1; i <= 10; i++) {

        if(i == 5) {
            break;   // Loop stops when i becomes 5
        }

        printf("%d\n", i);
    }


    // Continue Example
    printf("\nContinue Example:\n");

    for(int i = 1; i <= 10; i++) {

        if(i == 5) {
            continue;   // Skip number 5
        }

        printf("%d\n", i);
    }

    return 0;
}