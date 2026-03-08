#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Sum = %d", a + b);
            break;

        case '-':
            printf("Subtraction = %d", a - b);
            break;

        case '*':
            printf("Multiplication = %d", a * b);
            break;

        case '/':
            printf("Division = %d", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
