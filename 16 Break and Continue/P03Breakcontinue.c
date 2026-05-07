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
/*
Break Example:
1
2
3
4

Continue Example:
1
2
3
4
6
7
8
9
10

*/
    return 0;
}