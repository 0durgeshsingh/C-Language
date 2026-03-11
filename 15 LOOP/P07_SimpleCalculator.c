#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        printf("\n1.Add\n2.Subtract\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Sum = %.2f", a + b);
        }
        else if(choice == 2) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Difference = %.2f", a - b);
        }

    } while(choice != 3);

    return 0;
}



