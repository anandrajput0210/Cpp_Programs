#include <iostream>
using namespace std;

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

int main() {
    double first, second;
    int choice;

    cout << "Enter two numbers: ";
    cin >> first >> second;
    cout << "1. Add  2. Subtract  3. Multiply  4. Divide\n";
    cout << "Choose an operation: ";
    cin >> choice;

    if (choice < ADD || choice > DIVIDE) {
        cout << "Invalid operation." << endl;
        return 0;
    }

    Operation operation = static_cast<Operation>(choice);
    switch (operation) {
        case ADD: cout << "Result: " << first + second; break;
        case SUBTRACT: cout << "Result: " << first - second; break;
        case MULTIPLY: cout << "Result: " << first * second; break;
        case DIVIDE:
            if (second == 0) {
                cout << "Cannot divide by zero.";
            } else {
                cout << "Result: " << first / second;
            }
            break;
    }
    cout << endl;
    return 0;
}
