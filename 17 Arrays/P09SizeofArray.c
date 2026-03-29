#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Size of array: %d", size);

    return 0;
}
