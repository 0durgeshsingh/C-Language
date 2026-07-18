#include <iostream>
using namespace std;

// Function to square a number using a pointer
void square(int *n) {
    *n = (*n) * (*n);   // Square the value
}

int main() {
    int num = 6;        // Initialize variable

    square(&num);       // Pass address of num

    cout << "Square = " << num;   // Print result

    return 0;           // End program
}
