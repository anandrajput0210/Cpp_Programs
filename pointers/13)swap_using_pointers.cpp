#include <iostream>
using namespace std;

void swapNumbers(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int a = 10;
    int b = 25;

    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapNumbers(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
