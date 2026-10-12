#include <iostream>
using namespace std;

enum EmployeeRole {
    INTERN = 1,
    DEVELOPER,
    MANAGER
};

int main() {
    int choice;
    cout << "Choose role (1=Intern, 2=Developer, 3=Manager): ";
    cin >> choice;

    if (choice < INTERN || choice > MANAGER) {
        cout << "Invalid role." << endl;
        return 0;
    }

    EmployeeRole role = static_cast<EmployeeRole>(choice);
    switch (role) {
        case INTERN: cout << "Suggested monthly stipend: Rs. 8,000"; break;
        case DEVELOPER: cout << "Suggested monthly salary: Rs. 35,000"; break;
        case MANAGER: cout << "Suggested monthly salary: Rs. 60,000"; break;
    }
    cout << endl;
    return 0;
}
