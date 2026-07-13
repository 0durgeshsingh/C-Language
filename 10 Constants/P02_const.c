#include <stdio.h>

int main() {
    const int age = 18;

    printf("Age = %d\n", age);

    // age = 20;   // Error: cannot modify a const variable

    return 0;
}
