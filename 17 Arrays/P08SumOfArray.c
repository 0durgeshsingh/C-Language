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

/*
Enter the number of elements: 5
Enter element 1: 10
Enter element 2: 20
Enter element 3: 30
Enter element 4: 40
Enter element 5: 50
Array elements are: 10 20 30 40 50 
Sum of elements: 150

*/
