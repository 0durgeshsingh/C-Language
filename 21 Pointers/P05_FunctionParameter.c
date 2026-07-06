#include <iostream>
using namespace std;

void square(int *n) {
    *n = (*n) * (*n);
}

int main() {
    int num = 6;

    square(&num);

    cout << "Square = " << num;

    return 0;
}
