#include <stdio.h>

int main() {
    int arr[] = {10, 45, 23, 67, 12};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum = %d", max);
    return 0;
}
