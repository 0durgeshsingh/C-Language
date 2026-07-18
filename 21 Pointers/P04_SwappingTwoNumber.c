#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;   // Store first value
    *a = *b;         // Copy second value to first
    *b = temp;       // Copy stored value to second
}

int main() {
    int x = 5, y = 10;   // Initialize variables

    cout << "Before Swap: " << x << " " << y << endl;

    swap(&x, &y);        // Pass addresses of x and y

    cout << "After Swap: " << x << " " << y << endl;

    return 0;            // End program
}
