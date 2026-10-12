#include <iostream>
using namespace std;

enum DiscountType {
    FLAT_AMOUNT = 1,
    PERCENTAGE = 2
};

union Discount {
    double flatAmount;
    double percentage;
};

int main() {
    double price;
    int choice;
    Discount discount;
    double saved = 0;

    cout << "Enter product price: Rs. ";
    cin >> price;
    if (price < 0) {
        cout << "Price cannot be negative." << endl;
        return 0;
    }

    cout << "Discount type (1=Flat amount, 2=Percentage): ";
    cin >> choice;

    if (choice == FLAT_AMOUNT) {
        cout << "Enter discount amount: Rs. ";
        cin >> discount.flatAmount;
        if (discount.flatAmount < 0) {
            cout << "Discount cannot be negative." << endl;
            return 0;
        }
        saved = discount.flatAmount;
    } else if (choice == PERCENTAGE) {
        cout << "Enter discount percentage: ";
        cin >> discount.percentage;
        if (discount.percentage < 0 || discount.percentage > 100) {
            cout << "Percentage must be from 0 to 100." << endl;
            return 0;
        }
        saved = price * discount.percentage / 100.0;
    } else {
        cout << "Invalid discount type." << endl;
        return 0;
    }

    if (saved > price) saved = price;
    cout << "Discount: Rs. " << saved << endl;
    cout << "Final price: Rs. " << price - saved << endl;
    return 0;
}
