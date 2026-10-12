#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
    Student students[4] = {
        {101, "Aman", 82.5f},
        {102, "Riya", 91.0f},
        {103, "Karan", 76.5f},
        {104, "Neha", 87.0f}
    };

    int wantedRoll;
    cout << "Enter roll number to search: ";
    cin >> wantedRoll;

    bool found = false;
    for (int i = 0; i < 4; i++) {
        if (students[i].rollNumber == wantedRoll) {
            cout << "Student found: " << students[i].name << endl;
            cout << "Marks: " << students[i].marks << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No student has that roll number." << endl;
    }
    return 0;
}
