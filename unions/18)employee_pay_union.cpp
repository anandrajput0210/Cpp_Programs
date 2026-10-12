#include <iostream>
using namespace std;

enum PayType {
    MONTHLY = 1,
    HOURLY = 2
};

union PayInfo {
    double monthlySalary;
    double hourlyRate;
};

int main() {
    PayInfo pay;
    int choice;
    double total = 0;

    cout << "Pay type (1=Monthly salary, 2=Hourly): ";
    cin >> choice;

    if (choice == MONTHLY) {
        cout << "Enter monthly salary: ";
        cin >> pay.monthlySalary;
        total = pay.monthlySalary;
        cout << "Monthly pay: Rs. " << total << endl;
    } else if (choice == HOURLY) {
        double hours;
        cout << "Enter hourly rate: ";
        cin >> pay.hourlyRate;
        cout << "Enter hours worked this month: ";
        cin >> hours;
        total = pay.hourlyRate * hours;
        cout << "Monthly pay: Rs. " << total << endl;
    } else {
        cout << "Invalid pay type." << endl;
        return 0;
    }

    return 0;
}
