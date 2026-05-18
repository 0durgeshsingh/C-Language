#include <stdio.h>   // For input and output functions

int main() {

    float salary;   // float variable to store decimal value

    printf("Enter salary: ");

    scanf("%f", &salary);
    // %f is used for float input
    // &salary stores the value in salary variable

    printf("Salary = %.2f", salary);
    // %.2f prints value with 2 decimal places

    return 0;   // End of program
}