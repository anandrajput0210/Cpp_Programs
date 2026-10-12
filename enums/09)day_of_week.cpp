#include <iostream>
using namespace std;

enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    int number;
    cout << "Enter a day number (1-7): ";
    cin >> number;

    if (number < MONDAY || number > SUNDAY) {
        cout << "Invalid day number." << endl;
        return 0;
    }

    Day day = static_cast<Day>(number);
    switch (day) {
        case MONDAY: cout << "Monday"; break;
        case TUESDAY: cout << "Tuesday"; break;
        case WEDNESDAY: cout << "Wednesday"; break;
        case THURSDAY: cout << "Thursday"; break;
        case FRIDAY: cout << "Friday"; break;
        case SATURDAY: cout << "Saturday"; break;
        case SUNDAY: cout << "Sunday"; break;
    }
    cout << endl;
    return 0;
}
