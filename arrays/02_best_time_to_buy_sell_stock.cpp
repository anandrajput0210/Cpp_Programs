#include <iostream>
using namespace std;

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = 6;
    int lowestPrice = prices[0];
    int bestProfit = 0;

    for (int i = 1; i < size; i++) {
        int profit = prices[i] - lowestPrice;
        if (profit > bestProfit) {
            bestProfit = profit;
        }

        if (prices[i] < lowestPrice) {
            lowestPrice = prices[i];
        }
    }

    cout << "Maximum profit: " << bestProfit << endl;
    return 0;
}
