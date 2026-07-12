#include <stdio.h>

int main() {
    int num = 25;
    float value;

    // Implicit conversion
    value = num;

    printf("Integer = %d\n", num);
    printf("Float = %.2f\n", value);

    return 0;
    
}
