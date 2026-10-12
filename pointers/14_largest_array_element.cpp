#include <iostream>
using namespace std;

int main() {
    int numbers[] = {12, 7, 35, 4, 19};
    int size = 5;
    int* ptr = numbers;
    int largest = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    cout << "Largest number: " << largest << endl;
    return 0;
}
