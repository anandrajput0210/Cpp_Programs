#include <iostream>
using namespace std;

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int size = 5;
    int nextPosition = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[nextPosition] = nums[i];
            nextPosition++;
        }
    }

    while (nextPosition < size) {
        nums[nextPosition] = 0;
        nextPosition++;
    }

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
