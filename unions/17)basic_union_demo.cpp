#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
    char letter;
};

int main() {
    Data value;
    int choice;

    cout << "Store which type? 1=Integer, 2=Float, 3=Character: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter an integer: ";
        cin >> value.number;
        cout << "Stored integer: " << value.number << endl;
    } else if (choice == 2) {
        cout << "Enter a float: ";
        cin >> value.decimal;
        cout << "Stored float: " << value.decimal << endl;
    } else if (choice == 3) {
        cout << "Enter a character: ";
        cin >> value.letter;
        cout << "Stored character: " << value.letter << endl;
    } else {
        cout << "Invalid choice." << endl;
        return 0;
    }

    cout << "Size of union: " << sizeof(Data) << " bytes" << endl;
    return 0;
}
