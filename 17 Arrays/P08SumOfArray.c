#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n
    int sum = 0;

    // Input elements into the array
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        sum += arr[i]; // Add to sum
    }
    printf("\n");

    // Print sum of elements
    printf("Sum of elements: %d\n", sum);

    return 0;
}
