#include <stdio.h>

int main() {
    int num = 25;

    // Print value of num
    printf("Value of num = %d\n", num);

    // Print memory address of num
    printf("Address of num = %p\n", (void *)&num);

    // Declare a pointer and store address of num
    int *ptr = &num;

    // Print pointer value (address stored in ptr)
    printf("Value stored in ptr (address) = %p\n", (void *)ptr);

    // Print value at the address stored in ptr
    printf("Value pointed to by ptr = %d\n", *ptr);

    return 0;
}
/*
Output 
Value of num = 25
Address of num = 0x7ffd3a8b4c14
Value stored in ptr (address) = 0x7ffd3a8b4c14
Value pointed to by ptr = 25
*/
