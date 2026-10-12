#include <iostream>
using namespace std;

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = 9;
    int currentSum = nums[0];
    int bestSum = nums[0];

    for (int i = 1; i < size; i++) {
        if (currentSum + nums[i] < nums[i]) {
            currentSum = nums[i];
        } else {
            currentSum += nums[i];
        }

        if (currentSum > bestSum) {
            bestSum = currentSum;
        }
    }

    cout << "Maximum subarray sum: " << bestSum << endl;
    return 0;
}
